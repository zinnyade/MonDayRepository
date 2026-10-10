#include "Character.h"
#include "Config.h"
#include <cstdlib>
#include <iostream>
using namespace std;

//コンストラクタ
Character::Character()
{
	hp = Config::MAX_HP;

	power = rand() % (Config::MAX_STATUS - Config::MIN_STATUS + 1) + Config::MIN_STATUS;
	defence = rand() % (Config::MAX_STATUS - Config::MIN_STATUS + 1) + Config::MIN_STATUS;
	evasion = rand() % (Config::MAX_STATUS - Config::MIN_STATUS + 1) + Config::MIN_STATUS;

}

//ステータス表示
void Character::ShowStatus()
{
	cout << "現在のステータス\n"
		<< "HP:" << hp
		<< "\n攻撃力:" << power
		<< "\n防御力:" << defence
		<< "\n回避力:" << evasion << endl;
}

void Character::Attack(Character& target)
{
	//ランダムな攻撃値
	int randomValue = rand() % (Config::ADDITIONAL_POWER_MAX - Config::ADDITIONAL_POWER_MIN + 1) + Config::ADDITIONAL_POWER_MIN;
	int attackValue = power + randomValue;
	cout << "攻撃値:" << attackValue << endl;

	//回避判定
	if (attackValue <= target.evasion)
	{
		cout << "攻撃を回避しました。\n"
			<< "ダメージは0です。\n";
		return;
	}
	else
	{
		//ダメージ計算
		int damage = attackValue - target.defence;

		if (damage < 0)
		{
			damage = 0;
		}

		target.hp -= damage;

		cout << "攻撃成功！\n"
			<< damage << "ダメージです。\n";

		//生存判定
		if (target.hp < Config::DEAD_HP)
		{
			target.hp = 0;
		}
	}
}

void Character::Heal()
{
	int randomValue = rand() % (Config::ADDITIONAL_POWER_MAX - Config::ADDITIONAL_POWER_MIN + 1) + Config::ADDITIONAL_POWER_MIN;
	hp += randomValue;

	if (hp > Config::MAX_HP)
	{
		hp = Config::MAX_HP;
	}
	cout << "HPを" << randomValue << "回復しました。\n"
		<< "現在のHP:" << hp << endl;

}

bool Character::IsAlive()
{
	return hp > Config::DEAD_HP;
}

int Character::GetHp()
{
	return hp;
}

