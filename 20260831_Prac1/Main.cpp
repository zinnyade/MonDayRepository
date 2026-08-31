#include <iostream>
#include "BankAccount.h"
using namespace std;

int main() 
{
    //コンストラクタ
    BankAccount account("Alice", 5000.0);
    
    //アカウント情報表示
    account.displayAccountInfo();

    //預金
    account.deposit(1000.0);
    //引き出し
    account.withdraw(2000.0);
    //引き出し（失敗)
    account.withdraw(5000.0); // 残高不足で失敗

    //アカウント情報表示
    account.displayAccountInfo();

    return 0;
}