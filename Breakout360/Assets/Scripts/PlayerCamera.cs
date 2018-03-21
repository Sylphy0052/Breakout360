using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerCamera : MonoBehaviour {
//	public GameObject player;

	private GameObject player;
	private Quaternion firstDirection;

	void Start() {
		firstDirection = this.transform.rotation;
//		this.gameObject.GetComponent<SoundController> ().PlaySound ();
//		GetPlayerObject();
	}

	void Update () {
		SetDirection ();
	}

	public void GetPlayerObject(GameObject playerArg) {
//		player = GameObject.FindGameObjectWithTag ("Player");
		player = playerArg;
//		Debug.Log (player);
	}

	private Quaternion GetDirection() {
		Quaternion playerDirection = player.transform.rotation;
		return new Quaternion (firstDirection.x, playerDirection.y, playerDirection.z, playerDirection.w);
	}

	private void SetDirection() {
		this.transform.rotation = GetDirection();
	}


}
