#pragma once
#include "Player.h"
#include "Enemy.h"
class Game
{
private:
	Player player;
	Enemy enemy;

	/// <summary>
	/// ステータス表示
	/// </summary>
	void ShowStatus(const Player& player,const Enemy& enemy) const;

	/// <summary>
	/// プレイヤーの行動処理
	/// </summary>
	/// <param name="playerAction">プレイヤーの状態</param>
	/// <param name="enemyAction">敵の状態</param>
	void ProcessPlayerAction(PlayerAction playerAction, EnemyAction enemyAction);

	/// <summary>
	/// 敵の行動処理
	/// </summary>
	/// <param name="enemyAction">敵の状態</param>
	/// <param name="playerAction">プレイヤーの状態</param>
	void ProcessEnemyAction(EnemyAction enemyAction, PlayerAction playerAction);

	/// <summary>
	/// 勝負判定
	/// </summary>
	void CheckResult() const;

public:
	void Run();

};

