#include "ScoreManager.h"
#include <iostream>
using namespace std;

int main()
{ 
	ScoreManager score;
	
	score.displayScores(); //初期スコア表示

	//100ポイント獲得
	cout << "100ポイント獲得!" << endl;

	score.addPoints(100); //100ポイント加算
	score.displayScores();	//スコア表示

	//50ポイント獲得
	cout << "50ポイント獲得!" << endl;

	score.addPoints(50);	//50ポイント加算
	score.displayScores();	//スコア表示

	//ハイスコア更新
	cout << endl;
	cout << "ハイスコア更新!" << endl;

	score.updateHighScore();	//ハイスコア更新
	score.displayScores();	//スコア表示

	cout << endl;
	cout << "ゲーム終了!" << endl;

	score.resetScore();	//スコアリセット
	score.displayScores();	//スコア表示
	
	return 0;
}
