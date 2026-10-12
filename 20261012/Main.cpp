#include <iostream>
#include "Character.h"

int main(void)
{
	//コンストラクタ
	Character character("かに");
	std::cout << character.GetName() << std::endl;

	character.Attack();

	return 0;


}