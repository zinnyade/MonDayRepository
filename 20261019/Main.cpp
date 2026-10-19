#include "Servant.h"
#include "Saber.h"
#include "Archer.h"
#include "Rider.h"
#include <iostream>
using namespace std;

int main(void)
{
	// サーヴァントのインスタンスを生成
	Saber saber;
	Archer archer;
	Rider rider;

	// サーヴァントのプロフィールを表示と攻撃表示
	saber.ShowProfile();
	saber.Attack();

	archer.ShowProfile();
	archer.Attack();

	rider.ShowProfile();
	rider.Attack();

	return 0;
}
