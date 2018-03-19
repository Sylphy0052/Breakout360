using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour {
	private float turnSpeed = 3.0f;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void turnRight() {
		this.transform.Rotate (new Vector3(0, turnSpeed, 0));
	}

	public void turnLeft() {
		this.transform.Rotate (new Vector3(0, -turnSpeed, 0));
	}
}
