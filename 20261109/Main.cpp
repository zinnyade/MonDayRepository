#include <iostream>
#include "Enemy.h"

int main(void)
{
	std::cout << "ゲーム開始" << std::endl;

	//Enemyを生成
	//Enemy* enemy = new Enemy();

	//スマートポインタを使ってEnemyを生成
	std::unique_ptr<Enemy> enemy = std::make_unique<Enemy>();

	enemy->Update();
	enemy->Draw();

	//Enemyを解放
	//delete enemy;
	//enemy = nullptr;

	std::cout << "ゲーム終了" << std::endl;

	return 0;
}