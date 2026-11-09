#include "Enemy.h"
#include "Config.h"
#include <random>

Enemy::Enemy(const std::string& name) : Character(Config::INITIAL_HP), Name(name) {}

EnemyAction Enemy::DecideAction() const
{
	//—”‚Ì‰Šú‰»
	static std::random_device rd;
	static std::mt19937 engine(rd());

	std::uniform_int_distribution<int> dist(Config::ENEMY_ACTION_MIN, Config::ENEMY_ACTION_MAX);


	int enemyChoice = dist(engine); //0,1,2‚Ì‚¢‚¸‚ê‚©‚ğ¶¬
	
	if (enemyChoice == Config::ENEMY_ACTION_MIN)
	{
		return EnemyAction::Attack;
	}
	 
	return EnemyAction::Defense;

}

std::string Enemy::GetName() const
{
	return Name;
}

