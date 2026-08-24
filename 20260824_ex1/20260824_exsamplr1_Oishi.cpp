#include <iostream>
using namespace std;

int main(void) 
{
    //変数
    int a = 0;
    int* p = &a; //pにaのアドレスを持たせる

    cout << "aの初期値: " << a << endl; //aの初期値を表示

    *p = 10; //pを通してaを変更

    cout << "aの変更後の値: " << a << endl; //変更後のaを表示

    return 0;
}