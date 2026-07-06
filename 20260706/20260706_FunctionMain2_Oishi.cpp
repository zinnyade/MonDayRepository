#include<iostream>
#include "20260706_HeaderMain2_Oishi.h"
#include<ctime>
#include<cstdlib>
using namespace std;

//入力チェック関数
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

//勝敗判定関数
void Judge(int playerNum, int cpuNum, int& playerExp,int& level)
{
	int judge = playerNum - cpuNum;
	if (judge == 0) cout << "あいこです。\n";
	else if (judge == -1 || judge == 2)
	{
		cout << "あなたの負けです。\n";
	}
	else
	{
		cout << "あなたの勝ちです！\n";
		//経験値の計算
		int printExp = rand() % (EXP_MAX + 1) + EXP_MIN;
		//経験値の加算
		playerExp += printExp;
		//獲得した経験値の表示
		cout << printExp << "の経験値を獲得しました！\n";
		//レベルアップの判定
		if (playerExp >= LEVEL_EXP)
		{
			level++;
			//経験値の減算
			playerExp -= LEVEL_EXP;
			cout << "レベルアップ！Lv" << level << "になりました！\n";
		}
	}
}


//手の表示関数
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

//情報表示関数
void InformationPrint(int exp, int level)
{
	cout << "==============================\n"
		<< "現在の経験値は" << exp << "です。\n"
		<< "現在のレベルは" << level << "です。\n"
		<< "==============================\n";
}

//じゃんけんゲーム関数
void Game()
{
	//変数
	int playerHand, cpuHand;
	int playerExp = 0;
	int playerLevel = 1;

	//乱数の初期化
	srand((unsigned int)time(NULL));

	//ゲームについての説明
	cout << "CPUとじゃんけんをしてレベルをあげましょう！\n"
		<< "じゃんけんの手は0:グー、1:パー、2:チョキです。\n"
		<< "経験値が20たまるとレベルが1上がります。\n"
		<< "レベルが5になるとゲームクリアです。\n";
	//ゲームループ
	while (playerLevel < LEVEL_MAX)
	{
		//情報表示
		InformationPrint(playerExp, playerLevel);
		//プレイヤーの手の入力
		InputCheck(playerHand);
		//プレイヤーの手とCPUの手を表示
		cout << "あなた";
		HandPrint(playerHand);
		cpuHand = rand() % (HAND_MAX + 1);
		cout << "CPU";
		HandPrint(cpuHand);
		//勝敗判定
		Judge(playerHand, cpuHand, playerExp,playerLevel);
	}
}

