using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class StageManager : MonoBehaviour {
	public Text scoreText;
	public Text clearText;
	public Text overText;
	public CameraManager cm;

	private static int currentStage = 1;
	private int blockNum;


	void Start() {
		clearText.gameObject.SetActive (false);
		overText.gameObject.SetActive (false);
	}

	void Update() {
		CheckBlockNum ();
	}

	public void NextStage() {
		currentStage++;
	}

	private void CheckBlockNum() {
		blockNum = GameObject.FindGameObjectsWithTag ("Block").Length;
		scoreText.text = "Left:" + blockNum;
		if(blockNum == 0) {
			clearText.gameObject.SetActive (true);
		}
		if (cm.GetStatus() == CameraManager.CameraStatus.Playing & GameObject.FindGameObjectsWithTag ("Ball").Length == 0) {
			overText.gameObject.SetActive (true);
		}
	}

	public bool isFinish() {
		return blockNum == 0;
	}
}
