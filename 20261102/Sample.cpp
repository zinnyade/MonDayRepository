#include <iostream>
using namespace std;

namespace player
{
	void showStatus()
	{
		cout << "プレイヤーの名前：Harry" << endl;
	}

}

namespace enemy
{
	void showStatus()
	{
		cout << "敵の名前：Ron" << endl;
	}
}

int main()
{
	player::showStatus();
	enemy::showStatus();
	return 0;
}


