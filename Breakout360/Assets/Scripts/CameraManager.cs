using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraManager : MonoBehaviour {
	public GameObject mainCamera;
	public GameObject playerCamera;

	private CameraStatus status = CameraStatus.First;
	private MainCameraManager mcm;
	private PlayerCamera pcm;
	private GameObject player;

	private bool isDown = false;
	private bool isUp = false;
	private bool isRotate = false;

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
//		pcm = playerCamera.GetComponent<PlayerCamera> ();
	}

	void Update() {
		if(status == CameraStatus.Moving & isDown & mcm.isFinished()) {
			status = CameraStatus.Playing;
			mainCamera.SetActive (false);
			playerCamera.SetActive (true);
			pcm = playerCamera.GetComponent<PlayerCamera> ();
			pcm.GetPlayerObject (player);
			isDown = false;
		}
		if(status == CameraStatus.Moving & isUp & mcm.isFinished()) {
			status = CameraStatus.End;
			isUp = false;
		}
		if(status == CameraStatus.Moving & isRotate & mcm.isFinished()) {
			status = CameraStatus.First;
			isRotate = false;
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
		mcm = mainCamera.GetComponent<MainCameraManager> ();
		playerCamera.SetActive (false);
		mcm.PlayUpAnimation ();
		isUp = true;
	}

	public void NextStage() {
		status = CameraStatus.Moving;
		mcm.PlayNextStage ();
		isRotate = true;
	}

	public CameraStatus GetStatus() {
		return status;
	}

	public void SetStatus(CameraStatus setStatus) {
		status = setStatus;
	}

	public void SetPlayer(GameObject playerArg) {
//		Debug.Log (pcm);
//		Debug.Log (player);
		player = playerArg;
//		pcm.GetPlayerObject (player);
	}

}
