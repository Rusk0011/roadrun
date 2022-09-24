#pragma once
//ゲーム処理


//マクロ定義
#define ScreenWidth 1280	//画面の幅
#define ScreenHeight 720	//画面の長さ
#define ScreenColor 32		//画面の色
#define GameTitle "TestGame"//ゲームタイトル

//色系統の名前
#define Color_black		GetColor(0,0,0)
#define Color_white		GetColor(255,255,255)
#define	Color_skyblue	GetColor(135,206,235)
#define	Color_pink		GetColor(255,192,203)
#define Color_yellow	GetColor(255,255,0)

//列挙型
//ゲームシーン
enum GameScene {
	Title,	//タイトル
	Play,	//プレイシーン
	Result	//リザルトシーン
};