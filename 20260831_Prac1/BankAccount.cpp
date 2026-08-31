#include "BankAccount.h"
#include <iostream>
#include <string>

//残高入手
double BankAccount::getBalance() const 
{
    return balance; //残高
}

//預金
void BankAccount::deposit(double amount)
{
    if (amount > 0) 
    {
        balance += amount; //残高追加
        cout << "Deposited: " << amount << "\n";
    }
    else 
    {
        cout << "Invalid deposit amount.\n";
    }
}

//引き出し
void BankAccount::withdraw(double amount)
{
    if (amount > 0 && amount <= balance)
    {
        balance -= amount; //残高から引き落とす
        cout << "Withdrawn: " << amount << "\n";
    }
    else
    {
        cout << "Invalid withdraw amount or insufficient funds.\n";
    }
}

//アカウント情報表示
void BankAccount::displayAccountInfo() const
{
    cout << "Account Holder: " << accountHolder << "\n" //口座名義人表示
        << "Current Balance: " << balance << "\n"; //現在の残高表示
}