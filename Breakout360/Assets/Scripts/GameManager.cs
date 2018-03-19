using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour {
	public SceneController sc;
	public InputManager im;
	public GameObject player;
	public GameObject ball;
	public CameraManager cm;
	public StageManager sm;
	public StageTextManager stm;
	public AudioClip clearSound;
	public AudioClip overSound;
	public AudioClip touchSound;

	private AudioSource audioSource;
	private PlayerController pc;
	private BallManager bm;
	private static bool isGame = false;
	private GameStatus status = GameStatus.None;

	private enum GameStatus {
		Clear,
		Over,
		Playing,
		None,
	}

	void Start() {
		audioSource = GetComponent<AudioSource> ();
	}

	void Update () {
		if(isGame) {
			pc = player.GetComponent<PlayerController> ();
			bm = ball.GetComponent<BallManager> ();
			isGame = false;
		}
		ActionByScene ();
	}

	void ActionByScene() {
		switch(sc.GetStatus()) {
		case SceneController.GameStatus.Title:
			if (im.CheckTouch ()) {
				// シーン遷移
				isGame = true;
				sc.NextScene();
				audioSource.clip = touchSound;
				audioSource.Play ();
			}
			break;
		case SceneController.GameStatus.Game:
			InputManager.InputKey key = im.CheckPushKeys ();
			if (key == InputManager.InputKey.A) {
				pc.turnLeft ();
			}
			if (key == InputManager.InputKey.D) {
				pc.turnRight ();
			}
			switch (cm.GetStatus ()) {
			case CameraManager.CameraStatus.First:
				if (im.CheckTouch ()) {
					cm.DownCamera ();
					audioSource.clip = touchSound;
					audioSource.Play ();
				}
				break;
			case CameraManager.CameraStatus.Playing:
				if (im.CheckTouch ()) {
					bm.Fire ();
				}
				if(sm.isFinish()) {
					cm.SetStatus (CameraManager.CameraStatus.Finish);
					status = GameStatus.Clear;
					audioSource.clip = clearSound;
					audioSource.Play ();
				}
				if(pc.checkDeath()) {
					cm.SetStatus (CameraManager.CameraStatus.Finish);
					status = GameStatus.Over;
					audioSource.clip = overSound;
					audioSource.Play ();
				}
				break;
			case CameraManager.CameraStatus.Finish:
				if (im.CheckTouch ()) {
					cm.UpCamera ();
					audioSource.clip = touchSound;
					audioSource.Play ();
				}
				break;
			case CameraManager.CameraStatus.End:
				switch(status) {
				case GameStatus.Clear:
					stm.ShowClear ();
					break;
				case GameStatus.Over:
					stm.ShowOver ();
					break;
				}
				if (im.CheckTouch ()) {
					audioSource.clip = touchSound;
					audioSource.Play ();
					sm.NextStage ();
				}
				break;
			}
			break;
		case SceneController.GameStatus.Config:
			break;
		}
	}
}
