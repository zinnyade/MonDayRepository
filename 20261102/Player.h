#pragma once
#include "Character.h"
#include "PlayerAction.h"
#include <string>
class Player : public Character
{
private:
	std::string Name;
	
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	Player(const string& name);

	/// <summary>
	/// プレイヤーの行動を選択する
	/// </summary>
	/// <returns></returns>
	PlayerAction SelectAction()const;

	/// <summary>
	/// HPを回復する
	/// </summary>
	/// <param name="amount">回復量</param>
	void Heal(int amount);

	std::string GetName() const { return Name; }

};
