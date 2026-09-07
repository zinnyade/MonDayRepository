#include "ScoreManager.h"
#include <iostream>
using namespace std;

//コンストラクタ(初期化)
ScoreManager::ScoreManager()
{
	currentScore = 0;
	highScore = 0;
}

//ポイント加算
void ScoreManager::addPoints(int points)
{
	currentScore += points;
}

//スコアリセット
void ScoreManager::resetScore()
{
	currentScore = 0;
}

//ハイスコア更新
void ScoreManager::updateHighScore()
{
	//現在のスコアがハイスコアを超えた場合、ハイスコアを更新
	if (currentScore > highScore)
	{
		highScore = currentScore;
	}
}

//スコア表示
void ScoreManager::displayScores()
{
	cout << "現在のスコア: " << currentScore << endl;
	cout << "ハイスコア: " << highScore << endl;
}





