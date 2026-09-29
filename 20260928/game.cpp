#include "game.h"
#include "config.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

game::game()
{
	//カードを作成してシャッフル
	cardManager.CreateCard();
}

void game::Start()
{
	//初期カードを配る
	DealInitialCards();
	//プレイヤーターン
	bool playerTurnResult = turn.PlayPlayerTurn(&player, &cardManager);
	//cpuのターン
	if (playerTurnResult)
	{
		turn.PlayCpuTurn(&player, &cpu, &cardManager);
	}
	else
	{
		cout << "\nプレイヤーの負けです。\n";
		return;
	}
	//勝敗判定
	ShowResult();


}

void game::DealInitialCards()
{
	//プレイヤーとcpuに初期カードを配る
	for (int i = 0; i < START_CARD; i++)
	{
		int playerCard = cardManager.DrawCard();
		player.AddCard(playerCard);
		int cpuCard = cardManager.DrawCard();
		cpu.AddCard(cpuCard);
	}
}

void game::ShowResult()
{
	cout << "\n======================\n"
		<< "ゲーム結果\n"
		<< "======================\n";
	player.ShowStatus();
	cpu.ShowStatus();

	int playerTotal = player.GetTotal();
	int cpuTotal = cpu.GetTotal();

	if (cpuTotal >= BURST_SCORE || playerTotal == TARGET_SCORE)
	{
		cout << "\nプレイヤーの勝ち！\n";
		return;
	}

	if (cpuTotal == TARGET_SCORE)
	{
		cout << "\nCPUの勝ち！\n";
		return;
	}
	int playerDistance = TARGET_SCORE - playerTotal;

	int cpuDistance = TARGET_SCORE - cpuTotal;

	if (playerDistance > cpuDistance)
	{
		cout << "\nプレイヤーの勝ち！\n";
	}
	else if (playerDistance < cpuDistance)
	{
		cout << "\nCPUの勝ち！\n";
	}
	else
	{
		cout << "\n引き分け！\n";
	}


}



