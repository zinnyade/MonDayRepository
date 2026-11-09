#pragma once
class Enemy
{
private:
	int hp;

public:
	Enemy();
	~Enemy();

	int GetHp() const;

	void Draw();


};

