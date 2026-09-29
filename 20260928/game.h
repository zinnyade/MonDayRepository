#pragma once

#include "player.h"
#include "cpu.h"
#include "CardManager.h"
#include "Turn.h"

class game
{
private:

	//カード管理
	CardManager cardManager;
	//Player
	player player;
	//cpu
	cpu cpu;
	//ターン管理
	Turn turn;

	//カードを配る
	void DealInitialCards();
	//勝敗判定
	void ShowResult();

public:
	//コンストラクタ
	game();
	//ゲーム開始
	void Start();


};

