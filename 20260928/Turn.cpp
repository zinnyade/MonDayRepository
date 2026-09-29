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

		cout << "\nカードを引きますか？？\n";
		cout << INPUT_YES << ":Yes\n";
		cout << INPUT_NO << ":No\n";

		int input;

		cin >> input;

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

void Turn::PlayCpuTurn(player* player, cpu* cpu, CardManager* cardManager)
{
	cout << "\n===========================\n"
		<< "CPUターン\n"
		<< "===========================\n";
	player->ShowStatus();
	cpu->ShowStatus();

	while (true)
	{
		if (cpu->GetTotal() == TARGET_SCORE)
		{
			cout << "CPUの合計: 21 \n";
			break;
		}

		if (cpu->GetTotal() >= BURST_SCORE)
		{
			cout << "\nCPUはバーストしました。\n";
			break;
		}

		if (cpu->GetTotal() <= AUTO_DRAW_SCORE)
		{
			cout << "\nCPUは15以下なのでカードを引きます。\n";
		}
		else if (cpu->GetTotal() < player->GetTotal())
		{
			cout << "CPUはプレイヤーより小さいのでカードを引きます。\n";
		}
		else
		{
			cout << "CPUはプレイヤー以上になりました。\n";
			cout << "CPUはカードを引きません。\n";

			break;
		}

		//カードを取得
		int card = cardManager->DrawCard();
		cout << "\nCPUがカードを引きました。\n";
		cout << "引いたカード: " << card << endl;
		//cpuに引いたカードを追加
		cpu->AddCard(card);
		cpu->ShowStatus();


	}



}


