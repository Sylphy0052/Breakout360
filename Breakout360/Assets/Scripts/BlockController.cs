using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BlockController : MonoBehaviour {
	public GameObject breakEffect;

	public void Break() {
		Destroy (this.gameObject);
		this.gameObject.GetComponent<SoundController> ().PlaySound ();
		Instantiate (breakEffect, transform.position, Quaternion.identity);
	}
}
