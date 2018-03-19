using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour {
	public GyroManager gm;

	private float turnSpeed = 3.0f;
	private Quaternion firstDirection;

	void Start() {
		firstDirection = transform.rotation;
	}

	void Update() {
		if (Input.gyro.enabled) {
			SetGyroDirection ();
		}
	}

	private Quaternion GetDirection() {
		Quaternion playerDirection = this.transform.rotation;
		return new Quaternion (firstDirection.x, playerDirection.y, playerDirection.z, playerDirection.w);
	}

	private void SetGyroDirection() {
		Quaternion gyroDirection = gm.GetGyro ();
		this.transform.rotation = new Quaternion(firstDirection.x, gyroDirection.y, firstDirection.z, gyroDirection.w);
	}

	public void turnRight() {
		this.transform.Rotate (new Vector3(0, turnSpeed, 0));
	}

	public void turnLeft() {
		this.transform.Rotate (new Vector3(0, -turnSpeed, 0));
	}
}
