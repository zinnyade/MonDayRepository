#pragma once
#include <iostream>
#include <string>
class Enemy
{
private:
	int hp; //敵のHP

public:
	//コンストラクタとデストラクタ
	Enemy();
	~Enemy();

	/// <summary>
	/// 被ダメージ関数
	/// </summary>
	/// <param name="damage">ダメージ量</param>
	void Damage(int damage);

	/// <summary>
	/// HP取得
	/// </summary>
	/// <returns>現在のHP</returns>
	int GetHp() const;

	/// <summary>
	/// 生存フラグ
	/// </summary>
	/// <returns>生存</returns>
	bool IsAlive() const;


};

