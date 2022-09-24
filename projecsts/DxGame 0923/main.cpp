#include"stdafx.h"

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{

    // DxLib������
    ChangeWindowMode(TRUE);
    SetGraphMode(ScreenWidth, ScreenHeight, ScreenColor);
    if (DxLib_Init() == -1)
    {
        return -1;
    }
    // ���Ԍv��
    int nowTime = GetNowCount();
    int prevTime = nowTime;

    Player player;
    player.PlayerInit();

    // �Q�[�����[�v
    while (ProcessMessage() == 0)
    {
        // �t���[�����Ԃ��Z�o
        nowTime = GetNowCount();
        float deltaTime = (nowTime - prevTime) / 1000.0f;



  

        //��ʍX�V����
        ClearDrawScreen();
  
        //�v���C���[�A�b�v�f�[�g
        player.UpdatePlayer(deltaTime);

        //�`�揈��
        //�v���C���[�`��

        player.DrawPlayer();



        ScreenFlip();
        prevTime = nowTime;
    }
    DxLib_End();
    return 0;
}