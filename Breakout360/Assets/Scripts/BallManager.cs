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

	private Vector3 GetPlayerDirection() {
		return player.transform.forward;
	}

	public void Fire() {
		if(!isFire) {
			bc.Fire(GetPlayerDirection());
			isFire = true;
			this.transform.parent = null;
		}
	}

	void OnCollisionEnter(Collision coll) {
		// ブロックにぶつかったら
		if(coll.gameObject.CompareTag("Block")) {
			coll.gameObject.GetComponent<BlockController> ().Break ();
		}
	}
}
