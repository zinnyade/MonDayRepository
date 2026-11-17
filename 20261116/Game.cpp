#include "Game.h"
#include <iostream>
#include <limits>
#include "Config.h"

//初期化
void Game::Init()
{
	//敵を3体生成
	for (int i = 0; i < Config::ENEMY_COUNT; i++)
	{
		enemies.push_back(std::make_shared<Enemy>());
	}
}

//描画
void Game::Draw() const
{
	std::cout << "敵:";
	for (int i = 0; i < enemies.size(); i++)
	{
		if (enemies[i]->IsAlive()) //敵が生きていたら
		{
			std::cout << "敵" << i + 1 << "HP:" 
				<< enemies[i]->GetHp() << "\n"; //敵の現在のHPを取得して表示
		}
		else //敵が撃破済みなら
		{
			std::cout << "撃破済み\n";
		}
	}
}

//攻撃
void Game::Attack()
{
	int target; //プレイヤーの入力を保存する変数
	std::cout << "攻撃する敵を選択してください。（1～3）\n";

	if (!(std::cin >> target)) //数字を入力しなかった場合
	{
		std::cout << "数字を入力してください\n";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits < std::streamsize>::max(), '\n');

		return;
	}

	//入力した数字が範囲外の場合
	if (target < 1 || target > Config::ENEMY_COUNT)
	{
		std::cout << "入力した数字は選択できません。再度入力してください。\n";
		return;
	}

	std::shared_ptr<Enemy> targetEnemy = enemies[target - 1]; //プレイヤーが指定した敵を保存

	if (!targetEnemy->IsAlive()) //もし敵が撃破済みの場合
	{
		std::cout << "この敵はすでに倒されています。\n";
		return;
	}

	std::cout << "攻撃する敵は、" << target << "\n";

	targetEnemy->Damage(Config::DAMAGE); //指定した敵がダメージ量分ダメージを受ける
	std::cout << "敵" << target << "に戦闘ダメージ"
		<< Config::DAMAGE << "を与えました。\n";

}

//ゲームクリアフラグ
bool Game::IsGameClear() const
{
	for (const auto& enemy : enemies)
	{
		if (enemy->IsAlive()) //もし敵が一人でも生きていたらfalseで返す
		{
			return false;
		}
	}
	return true; //敵が全員撃破済みならtrueを返す
}

//ゲーム実行
void Game::Run()
{
	Init(); //初期化

	//ゲームループ
	while (true)
	{
		Draw(); //敵の詳細を表示
		Attack(); //攻撃
		if (IsGameClear()) //ゲームクリアの場合
		{
			std::cout << "GameClear!\n";
			break;
		}
	}
}
