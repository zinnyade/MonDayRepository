#include<iostream>
using namespace std;

int main(void)
{
	//変数
	int numbers[5] = { 35,82,17,96,54 }; //配列
	int* pNum = numbers; //numbersのポインタ
	int max = 0; //最大値


	for (int i = 0; i < 5; i++)
	{
		cout << "numbers[" << i << "] : " << *(pNum + i) << endl;
		if (max < *(pNum + i)) max = *(pNum + i); //最大値更新
	}

	//最大値表示
	cout << "最大値 : " << max << endl;


	return 0;
}