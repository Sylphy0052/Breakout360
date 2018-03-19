using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraManager : MonoBehaviour {
	public GameObject mainCamera;
	public GameObject playerCamera;

	private CameraStatus status = CameraStatus.First;
	private MainCameraManager mcm;

	private bool isDown = false;
	private bool isUp = false;

	public enum CameraStatus {
		First,
		Moving,
		Playing,
		Finish,
		End,
	}

	void Start () {
		mainCamera.SetActive (true);
		playerCamera.SetActive (false);
		mcm = mainCamera.GetComponent<MainCameraManager> ();
	}

	void Update() {
		if(status == CameraStatus.Moving & isDown & mcm.isFinished()) {
			status = CameraStatus.Playing;
			mainCamera.SetActive (false);
			playerCamera.SetActive (true);
			isDown = false;
		}
		if(status == CameraStatus.Moving & isUp & mcm.isFinished()) {
			status = CameraStatus.End;
			isUp = false;
		}
	}

	public void DownCamera() {
		status = CameraStatus.Moving;
		mcm.PlayDownAnimation ();
		isDown = true;
	}

	public void UpCamera() {
		status = CameraStatus.Moving;
		// カメラの視点をあわせる
		mainCamera.transform.rotation = playerCamera.transform.rotation;
		mainCamera.SetActive (true);
		playerCamera.SetActive (false);
		mcm.PlayUpAnimation ();
		isUp = true;
	}

	public CameraStatus GetStatus() {
		return status;
	}

	public void SetStatus(CameraStatus setStatus) {
		status = setStatus;
	}

}
