#include <iostream>
#include "Enemy.h"

void ShowEnemy(const Enemy& enemy)
{
	std::cout << "Enemy HP: " << enemy.GetHp() << std::endl;
}

int main(void)
{
	std::unique_ptr<Enemy> enemy = std::make_unique<Enemy>();

	enemy->Draw();

	void ShowEnemy(const Enemy & enemy);

	ShowEnemy(*enemy);

	return 0;


}