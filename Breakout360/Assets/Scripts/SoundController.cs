using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundController : MonoBehaviour {

	public AudioClip sound;
	public AudioSource source;

	public void PlaySound() {
		AudioSource.PlayClipAtPoint (sound, transform.position);
	}
}
