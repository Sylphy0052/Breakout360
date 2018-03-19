using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour {
	public SceneController sc;
	public InputManager im;
	public GameObject player;
	public GameObject ball;
	public CameraManager cm;

	private PlayerController pc;
	private BallManager bm;
	private static bool isGame = false;

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
			}
			break;
		case SceneController.GameStatus.Game:
			switch (cm.GetStatus ()) {
			case CameraManager.CameraStatus.First:
				if (im.CheckTouch ()) {
					cm.DownCamera ();
				}
				break;
			case CameraManager.CameraStatus.Playing:
				if (im.CheckTouch ()) {
					bm.Fire ();
				}
				InputManager.InputKey key = im.CheckPushKeys ();
				if (key == InputManager.InputKey.A) {
					pc.turnLeft ();
				}
				if (key == InputManager.InputKey.D) {
					pc.turnRight ();
				}
				break;
			case CameraManager.CameraStatus.End:
				if (im.CheckTouch ()) {
					// dosomething;
				}
				break;
			}
			break;
		case SceneController.GameStatus.Config:
			break;
		}
	}
}
