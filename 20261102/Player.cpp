#include "Player.h"
#include "Config.h"

#include <iostream>
#include <limits>
using namespace std;
//コンストラクタ
Player::Player(const string& name) :Character(Config::INITIAL_HP),Name(name) {}

//プレイヤーの行動を選択する
PlayerAction Player::SelectAction() const
{
	int playerInput;
	while (true)
	{
		cout << "行動を選択してください" << std::endl;
		cout << Config::PLAYER_ATTACK_INPUT << ":攻撃" << std::endl;
		cout << Config::PLAYER_DEFENSE_INPUT << ":防御" << std::endl;
		cout << Config::PLAYER_HEAL_INPUT << ":回復" << std::endl;
		cin >> playerInput;
		
		if (playerInput == Config::PLAYER_ATTACK_INPUT)
		{
			return PlayerAction::Attack;
		}
		if (playerInput == Config::PLAYER_DEFENSE_INPUT)
		{
			return PlayerAction::Defense;
		}
		if (playerInput == Config::PLAYER_HEAL_INPUT)
		{
			return PlayerAction::Heal;
		}
		cout << "無効な入力です。もう一度入力してください。" << std::endl;
		cin.clear();
		
	}
}

void Player::Heal(int amount)
{
	RecoverHP(amount);
}

string Player::GetName() const
{
	return Name;
}