#include<iostream>
#include"Character.h"
#include"Player.h"
#include"Enemy.h"
#include"Boss.h"
using namespace std;
int main(void)
{
	string playerName;
	string enemyName;
	string bossName;

	cout << "それぞれの名前を入力してください。\n";
	cout << "プレイヤー\n";
	cin >> playerName;
	cout << "敵\n";
	cin >> enemyName;
	cout << "ボス\n";
	cin >> bossName;
	//コンストラクタ
	//Character character("かに");
	Player player(playerName);
	Enemy enemy(enemyName);
	Boss boss(bossName);

	/*cout << character.GetName() << endl;
	character.Attack();*/

	cout << "プレイヤーの名前" << player.GetName() << endl;
	player.Attack();

	cout << "敵の名前" << enemy.GetName() << endl;
	enemy.Attack();

	cout << "ボスの名前" << boss.GetName() << endl;
	boss.Attack();






	return 0;
}