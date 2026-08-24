#include<iostream>
using namespace std;

//Š|‚¯ŽZ
void Mult(int input, int* pointer)
{
	int multNum[5] = {}; //Š|‚¯ŽZ—p‚Ì”z—ñ
	for (int i = 0; i < 5; i++)
	{
		multNum[i] = input * *(pointer + i); //Š|‚¯ŽZ
		cout << multNum[i] << endl;
	}
}

int main(void)
{
	//•Ï”
	int ary[5] = { 10,20,30,40,50 }; //”z—ñ
	int* pAry = ary; //ary‚Ìƒ|ƒCƒ“ƒ^
	int inputNum = 0; //“ü—Í

	//à–¾
	cout << "•\Ž¦‚³‚ê‚é”Žš‚É“ü—Í‚³‚ê‚½”Žš•ª”{‚É‚µ‚Ü‚·B\n";
	
	//”z—ñ‚Ì•\Ž¦
	for (int i = 0; i < 5; i++)
	{
		cout << *(pAry + i) << endl;
	}

	//“ü—Í
	cout << "”Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n";
	cin >> inputNum;

	//Š|‚¯ŽZ
	Mult(inputNum, pAry);

	return 0;
}