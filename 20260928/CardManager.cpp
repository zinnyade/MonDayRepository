#include "CardManager.h"
#include<iostream>
using namespace std;

CardManager::CardManager()
{
	cardCount = CARD_TOTAL;
}

void CardManager::CreateCard()
{
	int index = 0;
	for (int number = 0; number < CARD_MAX; number++)
	{
		for (int i = 0; i < SAME_CARD_MAX; i++)
		{
			cards[index] = number;
			index++;
		}
	}

	//シャッフル
	for (int j = 0; j < CARD_TOTAL; j++)
	{
		int randomIndex = j + rand() % (CARD_TOTAL - j);
		int temp = cards[j];
		cards[j] = cards[randomIndex];
		cards[randomIndex] = temp;
	}
	cardCount = CARD_TOTAL;
}

int CardManager::DrawCard()
{
	int card = cards[0];

	//残りのカードを前詰める
	for (int i = 0; i < cardCount - 1; i++)
	{
		cards[i] = cards[i + 1];
	}
	cardCount--;

	return card;
}

int CardManager::GetCardCount()
{
	return cardCount;
}


