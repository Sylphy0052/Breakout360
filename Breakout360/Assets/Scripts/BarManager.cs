using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BarManager : MonoBehaviour {

	void OnCollisionEnter(Collision coll) {
		AudioSource source = this.gameObject.GetComponent<AudioSource> ();
		source.volume = 0.5f;
		source.Play ();
	}
}
