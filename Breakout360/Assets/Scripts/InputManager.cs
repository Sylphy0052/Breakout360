using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InputManager : MonoBehaviour {

	public InputKey CheckPushKeys() {
		if(Input.GetKey(KeyCode.A)) {
			return InputKey.A;
		}
		if(Input.GetKey(KeyCode.D)) {
			return InputKey.D;
		}
		return InputKey.None;
	}

	public void checkGyro() {

	}

	public bool CheckTouch() {
		if(AppUtil.GetTouch() == AppUtil.TouchInfo.Ended) {
			return true;
		}
		return false;
	}

	public enum InputKey {
		None,
		Touch,
		A,
		D,
	}
}
