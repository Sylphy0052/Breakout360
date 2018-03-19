using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainCameraManager : MonoBehaviour {
	private Animation anim;

	void Start() {
		anim = GetComponent<Animation> ();
	}

	public void PlayDownAnimation() {
		anim.Play ("DownCamera");
	}

	public void PlayUpAnimation() {
		anim.Play ("UpCamera");
	}

	public bool isFinished() {
		return !anim.isPlaying;
	}
}
