#include "Enemy.h"

void Enemy::Init(Point intitialLocation, int initialHealh)
{
	location = intitialLocation;
	health = initialHealh;
}

void Enemy::Move(EnemyDirection direction, int step)
{
	switch (direction) {
	case EnemyDirection::UpDirection:
		location.y -= step;
		break;
	case EnemyDirection::DownDirection:
		location.y += step;
		break;	
	case EnemyDirection::LeftDirection:
		location.x -= step;
		break;
	case EnemyDirection::RightDirection:
		location.x += step;
		break;
	}
}

bool Enemy::IsDead()
{
	return (health <= 0) ? true : false;
}

void Enemy::Shoot(int damage)
{
	if (!IsDead()) {
		health -= damage;
	}
}
