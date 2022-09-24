#include"stdafx.h"

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{

    // DxLib初期化
    ChangeWindowMode(TRUE);
    SetGraphMode(ScreenWidth, ScreenHeight, ScreenColor);
    if (DxLib_Init() == -1)
    {
        return -1;
    }
    // 時間計測
    int nowTime = GetNowCount();
    int prevTime = nowTime;

    Player player;
    player.PlayerInit();

    // ゲームループ
    while (ProcessMessage() == 0)
    {
        // フレーム時間を算出
        nowTime = GetNowCount();
        float deltaTime = (nowTime - prevTime) / 1000.0f;



  

        //画面更新処理
        ClearDrawScreen();
  
        //プレイヤーアップデート
        player.UpdatePlayer(deltaTime);

        //描画処理
        //プレイヤー描画

        player.DrawPlayer();



        ScreenFlip();
        prevTime = nowTime;
    }
    DxLib_End();
    return 0;
}