using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InputManager : MonoBehaviour {
	public GameObject player;
	public GameObject ball;

	private PlayerController pc;
	private BallManager bm;

	// Use this for initialization
	void Start () {
		pc = player.GetComponent<PlayerController> ();
		bm = ball.GetComponent<BallManager> ();
	}
	
	// Update is called once per frame
	void Update () {
		checkPushKeys ();
		checkGyro ();
		checkTouch ();
	}

	private void checkPushKeys() {
		if(Input.GetKey(KeyCode.A)) {
			pc.turnLeft ();
		}
		if(Input.GetKey(KeyCode.D)) {
			pc.turnRight ();
		}
	}

	private void checkGyro() {

	}

	private void checkTouch() {
		if(AppUtil.GetTouch() == AppUtil.TouchInfo.Ended) {
			bm.Fire ();
		}
	}
}
