#include "Enemy.h"
#include "Config.h"

#include <iostream>
#include <cstdlib>

using namespace std;

Enemy::Enemy():Character(){}

void Enemy::Action(Character& target)
{
	cout << "\n“G‚Ìƒ^[ƒ“\n";
	int choice;

	choice = rand() % Config::ACTION_HEAL + 1;

	if (choice == Config::ACTION_ATTACK) Attack(target);
	else if (choice == Config::ACTION_HEAL) Heal();
}
