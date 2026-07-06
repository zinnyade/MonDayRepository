#pragma once
//定数
const int EXP_MAX = 15;
const int EXP_MIN = 1;
const int HAND_MAX = 2;
const int HAND_MIN = 0;
const int LEVEL_EXP = 20;
const int LEVEL_MAX = 5;
bool playerWin = false;

enum Hand
{
	ROCK,
	PAPER,
	SCISSORS
};


//関数プロトタイプ宣言
void Game();

void InputCheck(int& inputNum);

void GetEXP(int& exp);

void Judge(int playerNum, int cpuNum);

void HandPrint(int handNum);

void InformationPrint(int exp, int level);

