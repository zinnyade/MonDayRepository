#pragma once
class cpu
{
private:
	//cpuのスコア
	int score = 0;
public:
	//コンストラクタ
	cpu();
	//カードを追加
	void AddCard(int card);
	//合計点を取得
	int GetTotal();
	
};

