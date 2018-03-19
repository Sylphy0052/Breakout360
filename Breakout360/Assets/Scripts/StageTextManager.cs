using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class StageTextManager : MonoBehaviour {
	public Text stageText;
	public Text clearText;
	public Text overText;

	void Start () {
		stageText.gameObject.SetActive (true);
		clearText.gameObject.SetActive (false);
		overText.gameObject.SetActive (false);
	}

	public void ShowClear() {
		clearText.gameObject.SetActive (true);
	}

	public void ShowOver() {
		overText.gameObject.SetActive (true);
	}

}
