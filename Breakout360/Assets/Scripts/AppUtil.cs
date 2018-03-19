using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class AppUtil {
	public static TouchInfo GetTouch() {
		// PC上
		if(Application.isEditor) {
			if(Input.GetMouseButtonDown(0)) { 
				return TouchInfo.Began; 
			}

			if(Input.GetMouseButton(0)) { 
				return TouchInfo.Moved; 
			}

			if(Input.GetMouseButtonUp(0)) { 
				return TouchInfo.Ended; 
			}
		} else { // 実機
			if (Input.touchCount > 0) {
				return (TouchInfo)((int)Input.GetTouch(0).phase);
			}
		}
		return TouchInfo.None;
	}

	public enum TouchInfo {
		None = 99,
		Began = 0,
		Moved = 1,
		Stationary = 2,
		Ended = 3,
		Canceled = 4,
	}
}