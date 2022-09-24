#include "stdafx.h"



bool OnCollisionRct(int x1, int y1, int w1, int h1, int x2, int y2, int w2, int h2)//‹éŒ`‚ ‚½‚è”»’è
{
	if (((x1 > x2 && x1 < x2 + w2) ||
		(x2 > x1 && x2 < x1 + w1)) &&
		((y1 > y2 && y1 < y2 + h2) ||
			(y2 > y1 && y2 < y1 + h1)))
	{
		return true;
		//ÚG‚µ‚Ä‚¢‚é
	}
	else
	{
		return false;
		//ÚG‚µ‚Ä‚È‚¢

	}
}