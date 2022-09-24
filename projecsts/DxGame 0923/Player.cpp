#include "stdafx.h"
Player::Player()
{
	px = 0;
	py = 0;
	ph = 0;
	pw = 0;
	reversFlag = false;
}
//プレイヤー初期化
void Player::PlayerInit()
{
	
	//画像データ読み込み　後で変更する
	LoadDivGraph("img/chara.png", GraphNum, GraphXnum, GraphYnum, 64, 96, pGraph);
	px = 100;
	py = 100;



}
//プレイヤーアップデート　
void Player::UpdatePlayer(float deltaTime)
{
	//右移動定義
	if (CheckHitKey(KEY_INPUT_D) == 1 || CheckHitKey(KEY_INPUT_RIGHT) == 1)
	{
		px += speed*deltaTime;
		reversFlag = false;
	}
	//左移動定義
	if (CheckHitKey(KEY_INPUT_A) == 1 || CheckHitKey(KEY_INPUT_LEFT) == 1)
	{
		px -=speed*deltaTime;
		reversFlag = true;
	}


}

void Player::DrawPlayer()
{
	if (!reversFlag)
	{
		for (int i = 6; i < 8; i++)
		{
			DrawGraph(px, py, pGraph[i], TRUE);
		}
		
	}
	else if (reversFlag)
	{
		for (int i = 3; i < 5; i++)
		{
			DrawGraph(px, py, pGraph[i], TRUE);
		}
	}
	
}
