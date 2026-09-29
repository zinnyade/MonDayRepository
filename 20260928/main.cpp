#include <cstdlib>
#include<ctime>
#include"game.h"

int main(void)
{
	//乱数の初期化
	srand(static_cast<unsigned int>(time(nullptr)));
	//ゲームの初期化
	game game;
	//ゲームの開始
	game.Start();
	return 0;


}