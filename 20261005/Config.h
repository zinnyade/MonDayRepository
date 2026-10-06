#pragma once

namespace Config
{
	//ゲーム設定
	const int MAX_HP = 100;
	const int MIN_STATUS = 1;
	const int MAX_STATUS = 20;
	
	//攻撃時または回復時の追加値
	const int ADDITIONAL_POWER_MIN = 1;
	const int ADDITIONAL_POWER_MAX = 12;

	//プレイヤー入力設定
	const int ACTION_ATTACK = 1;
	const int ACTION_HEAL = 2;

	//敵の行動
	const int ENEMY_ACTION_COUNT = 2;

	//ゲーム終了
	const int DEAD_HP = 0;


}
