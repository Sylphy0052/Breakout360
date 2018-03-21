using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class StageTextManager : MonoBehaviour {
//	public GameObject stageText;
	public GameObject clearText;
	public GameObject overText;

	void Start () {
//		stageText.SetActive (true);
		clearText.SetActive (false);
		overText.SetActive (false);
	}

	public void ShowClear() {
		clearText.SetActive (true);
	}

	public void ShowOver() {
		overText.SetActive (true);
	}

	public void NextStageLabel() {
		clearText.SetActive (false);
		overText.SetActive (false);
	}

}
