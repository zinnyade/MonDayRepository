#include "player.h"
#include "config.h"
#include <iostream>
using namespace std;

player::player()
{
	score = 0;
}

void player::AddCard(int card)
{
	score += card;
}

int player::GetTotal()
{
	return score;
}

void player::ShowStatus()
{
	cout << "Playerの合計:" << score << endl;
}

void InputCheck(int& input)
{
	cout << "カードを引く場合は0を、引かない場合は1を入力してください。\n";
	while (true)
	{
		cin >> input;
		if (input > INPUT_NO || input < INPUT_YES) cout << "入力範囲が違います。もう一度入力してください。\n";
		else break;
	}
}






