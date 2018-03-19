using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BlockController : MonoBehaviour {

	public void Break() {
		Debug.Log ("Break");
		Destroy (this.gameObject);
	}
}
