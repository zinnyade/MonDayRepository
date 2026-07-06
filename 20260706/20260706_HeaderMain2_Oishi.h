#pragma once
//定数
const int EXP_MAX = 15;
const int EXP_MIN = 1;
const int HAND_MAX = 2;
const int HAND_MIN = 0;
const int LEVEL_EXP = 20;
const int LEVEL_MAX = 5;

enum Hand
{
	ROCK,
	PAPER,
	SCISSORS
};


//関数プロトタイプ宣言
//じゃんけんゲーム関数
void Game();
//入力チェック関数
void InputCheck(int& inputNum);
//勝敗判定関数
void Judge(int playerNum, int cpuNum, int& playerExp, int& level);
//手の表示関数
void HandPrint(int handNum);
//情報表示関数
void InformationPrint(int exp, int level);

