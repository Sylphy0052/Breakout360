using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class StageManager : MonoBehaviour {
	public Text scoreText;
//	public Text clearText;
//	public Text overText;
	public GameObject clearText;
	public GameObject overText;

	public CameraManager cm;

	private static int currentStage = 1;
	private int blockNum;
	private string stageName = "Stage1Objects";
	private GameObject stageObjects;
	private GameObject currentObjects;


	void Start() {
		stageObjects = GameObject.Find ("StageObjects");
		clearText.SetActive (false);
		overText.SetActive (false);
		currentObjects = stageObjects.transform.FindChild (stageName).gameObject;
		currentObjects.SetActive (true);
	}

	void Update() {
		CheckBlockNum ();
	}

	public void NextStage() {
		currentObjects.SetActive (false);
		currentStage++;
		stageName = "Stage" + currentStage + "Objects";
		currentObjects = stageObjects.transform.FindChild (stageName).gameObject;
		currentObjects.SetActive (true);
		clearText.SetActive (false);
		overText.SetActive (false);

	}

	private void CheckBlockNum() {
		blockNum = GameObject.FindGameObjectsWithTag ("Block").Length;
		scoreText.text = "Left:" + blockNum;
		if(blockNum == 0) {
			clearText.SetActive (true);
		}
		if (cm.GetStatus() == CameraManager.CameraStatus.Playing & GameObject.FindGameObjectsWithTag ("Ball").Length == 0) {
			overText.SetActive (true);
		}
	}

	public bool isFinish() {
		return blockNum == 0;
//		return blockNum >= 0;
//		return blockNum <= 5;
	}
}
