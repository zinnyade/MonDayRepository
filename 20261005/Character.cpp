#include "Character.h"
#include "Config.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int GenerateStatus(int hp, int power, int defence, int evasion)
{
	hp = MAX_HP;
	power = rand() % 20 + 1;
	defence = rand() % 20 + 1;
	evasion = rand() % 20 + 1;
	return hp, power, defence, evasion;
}

void ShowStatus(int hp, int power, int defence, int evasion)
{
	cout << "現在のステータス\n"
		<< "HP:" << hp
		<< "\n攻撃力:" << power
		<< "\n防御力:" << defence
		<< "\n回避力:" << evasion << endl;
}