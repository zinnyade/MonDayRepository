#pragma once
class Character
{
protected:
	int Hp;
	int Power;
	int Defence;
	int Evasion;

public:
	int GenerateStatus(int hp, int power, int defence, int evasion);
	void ShowStatus(int hp, int power, int defence, int evasion);

private:


};

