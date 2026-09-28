#pragma once
#include"config.h"
class CardManager
{
private:
	//カード配列
	int cards[CARD_TOTAL];
	int cardCount;
public:
	//コンストラクタ
	CardManager();
	//カードを作成
	void CreateCard();
	//カードを一枚引く
	int DrawCard();
	//残りのカード枚数を表示
	int GetCardCount();

};

