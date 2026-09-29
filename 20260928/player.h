#pragma once
class player
{
private:
	//プレイヤーのスコア
	int score = 0;
public:
	//コンストラクタ
	player();
	//カードを追加
	void AddCard(int card);
	//合計点を取得
	int GetTotal();
	//現在の状態を表示
	void ShowStatus();


};

