using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GyroManager : MonoBehaviour {

	// Use this for initialization
	void Start () {
		if (!Application.isEditor) {
			Input.gyro.enabled = true;
		} else {
			Input.gyro.enabled = false;
		}
		Input.gyro.enabled = true;
	}

	public Quaternion GetGyro() {
		Quaternion gyro = Input.gyro.attitude;
		return (Quaternion.Euler(90, 0, 0) * (new Quaternion(-gyro.x, -gyro.y, gyro.z, gyro.w)));
	}
}
