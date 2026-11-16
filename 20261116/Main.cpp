#include<iostream>
#include<memory>
#include"Enemy.h"



int main(void)
{
	//std::shared_ptr<Enemy> enemy = std::make_shared<Enemy>("ドラゴン");

	//enemy->Draw();

	//std::cout << "所有者の数" << enemy.use_count() << "\n";
	//
	//{
	//	std::shared_ptr<Enemy> enemyB = enemy;

	//	//コピー
	//	std::cout << "コピー後の数：" << enemy.use_count() << "\n";

	//	enemyB->Draw();

	//}

	//演習問題１
	//enemy->Draw();

	//std::shared_ptr<Enemy> enemy = std::make_shared<Enemy>("スライム");

	//enemy->Draw();

	//std::cout << "所有者の数" << enemy.use_count() << "\n";

	//enemy->Draw();


	std::shared_ptr<Enemy> enemyA = std::make_shared<Enemy>("EnemyA");
	std::shared_ptr<Enemy> enemyB = std::make_shared<Enemy>("EnemyB");
	std::shared_ptr<Enemy> enemyC = std::make_shared<Enemy>("EnemyC");



	return 0;

}