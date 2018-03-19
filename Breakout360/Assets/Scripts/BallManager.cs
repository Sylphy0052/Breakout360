using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallManager : MonoBehaviour {
	public GameObject player;

	private BallController bc;

	private bool isFire;

	// Use this for initialization
	void Start () {
		player = GameObject.FindGameObjectWithTag ("Player");
		bc = GetComponent<BallController> ();
		isFire = false;
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	private Vector3 GetPlayerDirection() {
		return player.transform.forward;
	}

	public void fire() {
		if(!isFire) {
			bc.fire(GetPlayerDirection());
			isFire = true;
			this.transform.parent = null;
		}
	}
}
