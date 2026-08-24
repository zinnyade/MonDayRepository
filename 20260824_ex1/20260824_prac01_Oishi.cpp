#include<iostream>
using namespace std;

int main(void)
{
	//•Ï”
	int numbers[5] = { 10,20,30,40,50 }; //”z—ñ
	int* pNumbers; 

	pNumbers = numbers;

	//”z—ñ‚Ì•\¦
	for (int i = 0; i < 5; i++)
	{
		cout << "pNumbers[" << i << "] : " << *(pNumbers + i) << endl;
	}






	return 0;
}