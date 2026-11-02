#pragma once
namespace Damage
{
	
	/// <summary>
	/// プレイヤーが敵に与えるダメージ
	/// </summary>
	/// <param name="enemyDefending">敵の選択</param>
	/// <returns>ダメージ</returns>
	int CalculatePlayerDamage(bool enemyDefending);

	/// <summary>
	/// 敵がプレイヤーに与えるダメージ
	/// </summary>
	/// <param name="playerDefending">プレイヤーの選択</param>
	/// <returns>ダメージ</returns>
	int CalculateEnemyDamage(bool playerDefending);

};
