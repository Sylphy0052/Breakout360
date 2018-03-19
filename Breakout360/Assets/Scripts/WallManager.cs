using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WallManager : MonoBehaviour {

	void OnCollisionEnter(Collision coll) {
		this.gameObject.GetComponent<SoundController> ().PlaySound ();
	}
}
