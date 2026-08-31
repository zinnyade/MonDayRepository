#pragma once
class VendingMachine
{
private:
	int money;
	int colaStock;
public:
	VendingMachine();
	void insertMoney(int amount);
	void buyCola();
	int getMoney() const;
	int getColaStock() const;
};

