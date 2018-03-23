using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneController : MonoBehaviour {

	public enum GameStatus {
		Title,
		Game,
		Config,
	}

	private static GameStatus currentStatus = GameStatus.Title;

	public void NextScene() {
		if(currentStatus == GameStatus.Title) {
			LoadGame ();
		}
	}

	public GameStatus GetStatus() {
		return currentStatus;
	}

	public void SetStatus(GameStatus status) {
		currentStatus = status;
	}

	public void LoadGame() {
		SceneManager.LoadScene("GameScene");
		currentStatus = GameStatus.Game;
	}

	public void LoadTitle() {
		SceneManager.LoadScene("Title");
		currentStatus = GameStatus.Title;
	}
}
