using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerCamera : MonoBehaviour {
	public GameObject player;
	private Quaternion firstDirection;

	// Use this for initialization
	void Start () {
		firstDirection = transform.rotation;
	}
	
	// Update is called once per frame
	void Update () {
		SetDirection ();
	}

	private Quaternion GetDirection() {
		Quaternion playerDirection = player.transform.rotation;
		return new Quaternion (firstDirection.x, playerDirection.y, playerDirection.z, playerDirection.w);
	}

	private void SetDirection() {
		this.transform.rotation = GetDirection();
	}
}
