using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour {
	public SceneController sc;
	public InputManager im;
	public GameObject player;
	public GameObject ball;

	private PlayerController pc;
	private BallManager bm;
	private static bool isGame = false;
	
	// Update is called once per frame
	void Update () {
		if(isGame) {
			Debug.Log ("Load Game");
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
		}
	}
}
