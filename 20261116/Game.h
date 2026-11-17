#pragma once
#include <memory>
#include <vector>
#include "Enemy.h"
#include "Config.h"
class Game
{
private:
	
	std::vector<std::shared_ptr<Enemy>> enemies; //

	/// <summary>
	/// 初期化
	/// </summary>
	void Init();

	/// <summary>
	/// 描画
	/// </summary>
	void Draw()const;

	/// <summary>
	/// 攻撃
	/// </summary>
	void Attack();

	/// <summary>
	/// ゲームクリアフラグ
	/// </summary>
	/// <returns>ゲームクリア</returns>
	bool IsGameClear() const;

public:
	/// <summary>
	/// 実行
	/// </summary>
	void Run();
};

