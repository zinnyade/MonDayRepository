#include "Enemy.h"
#include <iostream>

Enemy::Enemy()
{
	hp = 100;
}

Enemy::~Enemy()
{
	std::cout << "Enemy‚ğ”jŠü" << std::endl;
}

int Enemy::GetHp() const
{
	return hp;
}

void Enemy::Draw()
{
	std::cout << "Enemy HP: " << hp << std::endl;
}