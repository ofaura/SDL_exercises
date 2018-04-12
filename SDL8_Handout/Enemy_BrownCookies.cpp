#include "Application.h"
#include "Enemy_BrownCookies.h"
#include "ModuleCollision.h"

Enemy_BrownCookies::Enemy_BrownCookies(int x, int y) : Enemy(x, y)
{
	fly.PushBack({ 5,72,21,22 });
	animation = &fly;

	path.PushBack({ -1 , -2}, 25, &fly);
	path.PushBack({ -1 , 0 }, 25, &fly);
	path.PushBack({ -1 , 2 }, 25, &fly);
	path.PushBack({ -1 , 0 }, 25, &fly);
	path.PushBack({ -1 , -2}, 25, &fly);
	path.PushBack({ -1 , 0 }, 25, &fly);
	path.PushBack({ -1 , 2 }, 25, &fly);
	path.PushBack({ -1 , 0 }, 25, &fly);

	collider = App->collision->AddCollider({ 0, 0, 24, 24 }, COLLIDER_TYPE::COLLIDER_ENEMY, (Module*)App->enemies);

	position_y = y;
	position_x = x;
}

void Enemy_BrownCookies::Move()
{
	position.x = position_x + path.GetCurrentPosition().x;
	position.y = position_y + path.GetCurrentPosition().y;
}
