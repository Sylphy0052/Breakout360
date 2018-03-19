using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GyroManager : MonoBehaviour {

	// Use this for initialization
	void Start () {
		if (!Application.isEditor) {
			Debug.Log ("Gyro On");
			Input.gyro.enabled = true;
		} else {
			Debug.Log ("Gyro Off");
			Input.gyro.enabled = false;
		}
	}

	public Quaternion GetGyro() {
		Quaternion gyro = Input.gyro.attitude;
		return (Quaternion.Euler(90, 0, 0) * (new Quaternion(-gyro.x, -gyro.y, gyro.z, gyro.w)));
	}
}
