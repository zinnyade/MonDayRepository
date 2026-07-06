#include<iostream>
#include"20260706_Header1_Oishi.h"
using namespace std;

//回復処理
void Heal(int& health)
{
	cout << "HPを20回復します\n";
	health += HEAL_AMOUNT;
}

//入力チェック処理
int InputCheck()
{
	int inputNum;
	cout << "回復するか選択してください。Yes：1 No：2\n";
	while (true)
	{
		cin >> inputNum;
		if (inputNum > INPUT_MAX || inputNum < INPUT_MIN) cout << "入力範囲が違います。もう一度入力してください\n";
		else break;
	}
	return inputNum;
}

void Run()
{
	int HP = HEALTH_POINT;
	int choice = InputCheck();

	if (choice == INPUT_MIN) Heal(HP);

	cout << "現在のHPは" << HP << "です\n";
	

}