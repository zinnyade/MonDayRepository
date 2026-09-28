#include "cpu.h"
#include <iostream>
using namespace std;

cpu::cpu()
{
	score = 0;
}

void cpu::AddCard(int card)
{
	score += card;
}

int cpu::GetTotal()
{
	return score;
}





