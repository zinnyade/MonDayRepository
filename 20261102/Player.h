#pragma once
#include "Character.h"
#include "PlayerAction.h"
class Player : public Character
{
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	Player();

	/// <summary>
	/// プレイヤーの行動を選択する
	/// </summary>
	/// <returns></returns>
	PlayerAction SelectAction()const;

	void Heal(int amount);

};
