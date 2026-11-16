#include "Enemy.h"

Enemy::Enemy(const std::string& name): name(name),hp(100)
{
	std::cout << name << "が出現した！\n";
}

Enemy::~Enemy()
{
	std::cout << name << "は破棄されました。\n";
}

void Enemy::Draw() const
{
	std::cout << "名前:" << name << "\n";
	std::cout << "HP:" << hp << "\n";
}

void Enemy::Damage(int damage)
{
	hp -= damage;
	if (hp < 0) hp = 0;
}

int Enemy::GetHp() const
{
	return hp;
}

bool Enemy::IsAlive()
{
	if (hp = 0) return false;
}