#pragma once
class Character
{
protected:
	int hp;
	int power;
	int defence;
	int evasion;

public:

	/// <summary>
	/// コンストラクタ
	/// </summary>
	Character();

	/// <summary> 
	///ステータス表示
	/// </summary>
	void ShowStatus();

	/// <summary>
	/// 攻撃
	/// </summary>
	/// <param name="target">対象のキャラクターオブジェクト</param>
	void Attack(Character& target);
	
	/// <summary>
	/// 回復
	/// </summary>
	void Heal();
	
	/// <summary>
	/// 生存判定
	/// </summary>
	/// <returns>生存判定フラグ</returns>
	bool IsAlive();
	
	/// <summary>
	/// HP取得
	/// </summary>
	/// <returns>HP</returns>
	int GetHp();
	



};

