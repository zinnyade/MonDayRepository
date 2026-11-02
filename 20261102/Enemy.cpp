#include "Enemy.h"
#include "Config.h"

Enemy::Enemy() :Character(Config::INITIAL_HP) {}

EnemyAction Enemy::DecideAction() const
{
	//ƒ‰ƒ“ƒ_ƒ€‚És“®‚ğŒˆ’è‚·‚é
	int randomValue = rand() % 3; //0,1,2‚Ì‚¢‚¸‚ê‚©‚ğ¶¬
	if (randomValue == 0)
	{
		return EnemyAction::Attack;
	}
	else if (randomValue == 1)
	{
		return EnemyAction::Defense;
	}
	else
	{
		return EnemyAction::Heal;
	}
}