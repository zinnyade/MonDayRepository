#include "Character.h"
#include "Config.h"
#include <iostream>

Character::Character(int initialHP) :hp(initialHP) {}

void Character::ShowStatus(const std::string& name) const
{
	std::cout << name << "‚ÌHPF" << hp << std::endl;
}

void Character::TakeDamage(int damage)
{
	hp -= damage;
	if (hp < 0)
	{
		hp = 0;
	}
}

int Character::GetHP() const
{
	return hp;
}

void Character::RecoverHP(int amount)
{
	hp += amount;
	if (hp > Config::MAX_HP)
	{
		hp = Config::MAX_HP;
	}
}