#include<iostream>
#include"Character.h"
#include"Player.h"
#include"Enemy.h"
#include"Boss.h"
using namespace std;
int main(void)
{
	//コンストラクタ
	Character character("かに");
	Player player("プレイヤー");
	Enemy enemy("エネミー");
	Boss boss("ボス");

	cout << character.GetName() << endl;
	character.Attack();

	cout << player.GetName() << endl;
	player.Attack();

	cout << enemy.GetName() << endl;
	enemy.Attack();

	cout << boss.GetName() << endl;
	boss.Attack();






	return 0;
}