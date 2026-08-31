#include "VendingMachine.h"
#include <iostream>
using namespace std;

VendingMachine::VendingMachine()
{
	money = 0;
	colaStock = 15;
}

void VendingMachine::insertMoney(int amount)
{
	if (amount > 0)
	{
		money += amount;
	}
}

void VendingMachine::buyCola()
{
	const int price = 180;
	if (money >= price && colaStock > 0)
	{
		money -= price;
		colaStock--;
		cout << "コカ・コーラを購入しました。\n";
	}
	else
	{
		cout << "購入できませんでした。\n";
	}
}

int VendingMachine::getMoney() const
{
	return money;
}

int VendingMachine::getColaStock() const
{
	return colaStock;
}









