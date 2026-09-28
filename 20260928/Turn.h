#pragma once
#include"player.h"
#include"cpu.h"
#include"CardManager.h"

class Turn
{
public:
	//プレイヤーターン
	bool PlayPlayerTurn(player* player, CardManager* cardManager);
	//Cpuターン
	void PlayCpuTurn(player* player, cpu* cpu, CardManager* cardManager);


};

