#include "Player.h"
#include "Config.h"

#include <iostream>
#include <limits>

//コンストラクタ
Player::Player() :Character(Config::INITIAL_HP) {}

//プレイヤーの行動を選択する
PlayerAction Player::SelectAction() const
{
	int playerInput;
	while (true)
	{
		std::cout << "行動を選択してください" << std::endl;
		std::cout << Config::PLAYER_ATTACK_INPUT << ":攻撃" << std::endl;
		std::cout << Config::PLAYER_DEFENSE_INPUT << ":防御" << std::endl;
		std::cout << Config::PLAYER_HEAL_INPUT << ":回復" << std::endl;
		std::cin >> playerInput;
		
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
		std::cout << "無効な入力です。もう一度入力してください。" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}

void Player::Heal(int amount)
{
	RecoverHP(amount);
}