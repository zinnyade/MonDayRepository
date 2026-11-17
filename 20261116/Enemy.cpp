#include "Enemy.h"
#include "Config.h"

//コンストラクタとデストラクタ
Enemy::Enemy() :hp(Config::ENEMY_HP) {}
Enemy::~Enemy(){}

//被ダメージ関数
void Enemy::Damage(int damage)
{
	hp -= damage; //hpをダメージ量分減らす
	if (hp < 0) hp = 0; //hpが0未満なら0にする
}

//HPの取得
int Enemy::GetHp() const
{
	return hp;
}

//生存フラグ
bool Enemy::IsAlive() const
{
	return hp > 0; //HPが0ではないことを返す
}