#pragma once
//�Q�[������


//�}�N����`
#define ScreenWidth 1280	//��ʂ̕�
#define ScreenHeight 720	//��ʂ̒���
#define ScreenColor 32		//��ʂ̐F
#define GameTitle "TestGame"//�Q�[���^�C�g��

//�F�n���̖��O
#define Color_black		GetColor(0,0,0)
#define Color_white		GetColor(255,255,255)
#define	Color_skyblue	GetColor(135,206,235)
#define	Color_pink		GetColor(255,192,203)
#define Color_yellow	GetColor(255,255,0)

//�񋓌^
//�Q�[���V�[��
enum GameScene {
	Title,	//�^�C�g��
	Play,	//�v���C�V�[��
	Result	//���U���g�V�[��
};