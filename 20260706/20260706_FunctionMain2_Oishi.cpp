#include<iostream>
#include "20260706_HeaderMain2_Oishi.h"
#include<ctime>
#include<cstdlib>
using namespace std;

void InputCheck(int& inputNum)
{
	cout << "じゃんけんの手を入力してください\n";
	while (true)
	{
		cin >> inputNum;
		if (inputNum < HAND_MIN || inputNum > HAND_MAX) cout << "入力範囲が違います。もう一度入力してください。\n";
		else break;
	}
}

void Judge(int playerNum, int cpuNum, int& playerExp)
{
	int judge = playerNum - cpuNum;
	if (judge == 0) cout << "あいこです。\n";
	else if (judge == -1 || judge == 2)
	{
		cout << "あなたの負けです。\n";
		playerWin = false;
	}
	else
	{
		cout << "あなたの勝ちです。\n";
		playerWin = true;
	}
}

void GetEXP(int& exp, int& level)
{
	if (playerWin == true) exp += rand() % (EXP_MAX + 1) + EXP_MIN;
	if (exp >= LEVEL_EXP)
	{
		level++;
		exp -= LEVEL_EXP;
	}
}

void HandPrint(int handNum)
{
	switch (handNum)
	{
	case ROCK:
		cout << "の手はグーです。\n";
		break;
	case PAPER:
		cout << "の手はパーです。\n";
		break;
	case SCISSORS:
		cout << "の手はチョキです。\n";
		break;
	}
}

void InformationPrint(int exp, int level)
{
	cout << "==============================\n"
		<< "現在の経験値は" << exp << "です。\n"
		<< "現在のレベルは" << level << "です。\n"
		<< "==============================\n";
}

void Game()
{
	//変数
	int playerHand, cpuHand;
	int playerExp = 0;
	int playerLevel = 1;

	//乱数の初期化
	srand((unsigned int)time(NULL));

	InformationPrint(playerExp, playerLevel);


}

