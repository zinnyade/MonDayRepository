#pragma once
namespace Config
{

	//HP
	constexpr int INITIAL_HP = 100;
	constexpr int MAX_HP = 100;

	//Player
	constexpr int PLAYER_ATTACK_INPUT = 1;
	constexpr int PLAYER_DEFENSE_INPUT = 2;
	constexpr int PLAYER_HEAL_INPUT = 3;

	constexpr int PLAYER_ATTACK_DAMAGE = 30;
	constexpr int PLAYER_DEFENSE_DEFENSE = 10;
	constexpr int PLAYER_HEAL_AMOUNT = 20;

	//Enemy
	constexpr int ENEMY_ATTACK_DAMAGE = 20;
	constexpr int ENEMY_DEFENSE_DEFENSE = 10;

	//EnemyChoice
	constexpr int ENEMY_ACTION_MIN = 0;
	constexpr int ENEMY_ACTION_MAX = 1;

	constexpr int ENEMY_ATTACK_CHOICE = 2;
}
