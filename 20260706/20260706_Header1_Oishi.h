#pragma once
//定数
const int HEALTH_POINT = 100;
const int HEAL_AMOUNT = 20;
const int INPUT_MIN = 1;
const int INPUT_MAX = 2;

//ヒール関数
void Heal(int& health);
//入力チェック関数
int InputCheck();
//実行関数
void Run();