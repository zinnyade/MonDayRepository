#pragma once
#include "Character.h"
class Player :public Character
{
public:
	Player(int hp, int power, int defence, int evasion);
private:
	int choiceNum;
};

