#include "Turn.h"
#include <iostream>
#include "config.h"
using namespace std;

bool Turn::PlayPlayerTurn(player* player, CardManager* cardManager)
{
	while (true)
	{
		cout << "\n===========================\n";
		cout << "プレイヤーターン\n";
		cout << "===========================\n";

		player->ShowStatus();
		if (player->GetTotal() == TARGET_SCORE)
		{
			cout << "\nプレイヤーの合計 : 21\n";

			return true;
		}

		int input;
		player->InputCheck(input);

		//カードを引かない
		if (input == INPUT_NO)
		{
			cout << "\nカードを引きません。\n";
			return true;
		}

		if (input == INPUT_YES)
		{
			//カードを取得
			int card = cardManager->DrawCard();

			cout << "\nプレイヤーがカードを引きました。\n";
			cout << "引いたカード : " << card << endl;

			//playerに引いたカードを追加
			player->AddCard(card);

			player->ShowStatus();


		}
		
		if (player->GetTotal() >= BURST_SCORE)
		{
			cout << "\nプレイヤーはバーストしました。\n";
			return false;
		}

	}
}