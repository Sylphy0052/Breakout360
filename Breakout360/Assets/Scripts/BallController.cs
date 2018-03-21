using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallController : MonoBehaviour {
	private float speed = 20.0f;
	private Rigidbody rb;
	private Transform firstTransform;

	void Start () {
		rb = this.GetComponent<Rigidbody> ();
		firstTransform = this.transform;
	}

	public void Fire(Vector3 direction) {
		rb.velocity = direction * speed;
	}
}
