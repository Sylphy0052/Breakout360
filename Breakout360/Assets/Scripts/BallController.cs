using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallController : MonoBehaviour {
	private float speed = 20.0f;
	private Rigidbody rb;

	// Use this for initialization
	void Start () {
		rb = this.GetComponent<Rigidbody> ();
	}

	// Update is called once per frame
	void Update () {
		
	}

	public void fire(Vector3 direction) {
		rb.velocity = direction * speed;
	}
}
