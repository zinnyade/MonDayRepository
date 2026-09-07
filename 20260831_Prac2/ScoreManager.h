#pragma once

class ScoreManager
{
private:
	//メンバ変数
	int currentScore; //現在のスコア
	int highScore;	//ハイスコア

public:

	//コンストラクタ
	ScoreManager();

	//メンバ関数
	void addPoints(int points); //ポイント加算
	void resetScore();	//スコアリセット
	void updateHighScore();	//ハイスコア更新
	void displayScores();	//スコア表示


};

