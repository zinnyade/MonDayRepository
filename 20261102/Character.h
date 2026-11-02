#pragma once
#include <string>
class Character
{
private:
	int hp;
protected:

	/// <summary>
	/// HPを回復する
	/// </summary>
	/// <param name="amount">回復量</param>
	void RecoverHP(int amount);
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	/// <param name="initialHP">初期HP</param>
	Character(int initialHP);

	/// <summary>
	/// ステータスを表示する
	/// </summary>
	/// <param name="name">キャラクター名</param>
	void ShowStatus(const std::string& name) const;

	/// <summary>
	/// ダメージを受ける
	/// </summary>
	/// <param name="damage">ダメージ量</param>
	void TakeDamage(int damage);

	/// <summary>
	/// HPを取得
	/// </summary>
	/// <returns>HP</returns>
	int GetHP() const;
};

