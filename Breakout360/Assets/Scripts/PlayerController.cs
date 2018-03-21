using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour {
	public GyroManager gm;
	public CameraManager cm;

	private float turnSpeed = 4.0f;
	private Quaternion firstDirection;
	private Vector3 beforeVector;
	private bool isDeath = false;

	void Start() {
		firstDirection = transform.rotation;
		beforeVector = transform.rotation.eulerAngles;
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
//		this.transform.rotation = new Quaternion(firstDirection.x, gyroDirection.y, firstDirection.z, gyroDirection.w);
		this.transform.rotation = new Quaternion(firstDirection.x, gyroDirection.y, gyroDirection.z, gyroDirection.w);
	}

	public void turnRight() {
		this.transform.Rotate (new Vector3(0, turnSpeed, 0));
	}

	public void turnLeft() {
		this.transform.Rotate (new Vector3(0, -turnSpeed, 0));
	}

	public void Death() {
		isDeath = true;
		if(cm.GetStatus() == CameraManager.CameraStatus.Playing) {
			this.gameObject.GetComponent<SoundController> ().PlaySound ();
		}
	}

	public bool checkDeath() {
		return isDeath;
	}
}
