#pragma once
#define GraphNum 12
#define GraphXnum 3
#define GraphYnum 4
#define speed 200.0f
class Player
{

	int px;
	int py;
	int ph;
	int pw;
	int pGraph[GraphNum];
	bool reversFlag;

public:
	Player();
	void PlayerInit();
	void UpdatePlayer(float deltaTime);
	void DrawPlayer();
};

