#include"Game.h"

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

	Game game; //Gameクラスをもとにインスタンスを作成。

	game.Run(); //ゲーム実行

	return 0;

}