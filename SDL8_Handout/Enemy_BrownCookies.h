#ifndef __ENEMY_BROWNCOOKIES_H__
#define __ENEMY_BROWNCOOKIES_H__

#include "Enemy.h"

class Enemy_BrownCookies : public Enemy
{
private:
	int position_y;
	int position_x;
	Animation fly;
	Path path;
	fPoint speed;

public:

	Enemy_BrownCookies(int x, int y);

	void Move();
};

#endif // __ENEMY_BROWNCOOKIES_H__