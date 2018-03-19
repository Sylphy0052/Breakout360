using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundController : MonoBehaviour {

	public AudioClip sound;
	public AudioClip soundSub1;
//	public AudioSource source;

	public void PlaySound() {
		AudioSource.PlayClipAtPoint (sound, transform.position);
	}

	public void PlaySound2() {
		AudioSource.PlayClipAtPoint (soundSub1, transform.position);
	}
}
