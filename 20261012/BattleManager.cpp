#include "BattleManager.h"
#include <iostream>
using namespace std;
void BattleManager::StartBattle(Character* player, Character* enemy, Character* boss)
{
	cout << "プレイヤーの名前:" << player->GetName() << endl;
	player->Attack();
	cout << "敵の名前:" << enemy->GetName() << endl;
	enemy->Attack();
	cout << "ボスの名前:" << boss->GetName() << endl;
	boss->Attack();

}


