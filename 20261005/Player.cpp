#include "Player.h"
#include "Config.h"

#include <iostream>
using namespace std;

//コンストラクタ
Player::Player() :Character() {}

//プレイヤーの行動
void Player::Action(Character& target)
{
	int choice;

	cout << "\n【プレイヤーのターン】\n"
		<< "1:攻撃\n2:回復\n" << ">>" << endl;

	while (true)
	{
		cin >> choice;
		if (Config::ACTION_ATTACK > choice || Config::ACTION_HEAL < choice)
		{
			cout << "入力範囲が異なります。もう一度入力してください。\n";
		}
		else break;
	}

	if (choice == Config::ACTION_ATTACK) Attack(target);
	else if (choice == Config::ACTION_HEAL) Heal();
}


