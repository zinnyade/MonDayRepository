#pragma once

//ゲーム設定

//目標点数
const int TARGET_SCORE = 21;
//バースト
const int BURST_SCORE = 22;
//cpuが自動的にカードを引く上限
const int AUTO_DRAW_SCORE = 15;

//カード設定

//カードの最小値
const int CARD_MIN = 1;
//カードの最大値
const int CARD_MAX = 11;
//同じカードの枚数
const int SAME_CARD_MAX = 4;
//カードの総枚数
const int CARD_TOTAL = 44;

//初期カード設定

//最初に配るカードの枚数
const int START_CARD = 2;

//プレイヤーの入力

//カードを引く
const int INPUT_YES = 0;
//カードを引かない
const int INPUT_NO = 1;
