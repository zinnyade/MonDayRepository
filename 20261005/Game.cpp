#include "Game.h"
#include <iostream>
using namespace std;

Game::Game() : player(), enemy(){}

void Game::Start()
{
	cout << "ゲーム開始\n";

	cout << "プレイヤーのステータス\n";
	player.ShowStatus();
	cout << "敵のステータス\n";
	enemy.ShowStatus();

	while (player.IsAlive() && enemy.IsAlive())
	{
		Turn turn(&player, &enemy);
		turn.Execute();
		int playerHP = player.GetHp();
		int enemyHP = enemy.GetHp();
		cout << "プレイヤーHP:" << playerHP << endl;
		cout << "敵のHP:" << enemyHP << endl;

	}

	if (player.IsAlive())
	{
		cout << "プレイヤーの勝ち！\n";
	}
	else
	{
		cout << "敵の勝ち！\n";
	}


}