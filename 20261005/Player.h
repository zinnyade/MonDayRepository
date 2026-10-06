#pragma once
#include "Character.h"
class Player :public Character
{
public:

	/// <summary>
	/// Playerコンストラクタ
	/// </summary>
	Player();

	/// <summary>
	/// プレイヤーの行動選択
	/// </summary>
	/// <param name="target"></param>
	void Action(Character& target);

private:
	int choiceNum;
};

