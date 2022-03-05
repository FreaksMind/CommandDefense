#include "EnemyController.h"
#include "Enemy.h" // to actualy use the field Enemy declared in the header by forward declaration, we use the field here

void EnemyController::Init(int maximumEnemies, int step, Point initialLocation)
{
	enemies = new Enemy[maximumEnemies];
	maxEnemies = maximumEnemies;
	stepSize = step;
	startinLocation = initialLocation;
}

void EnemyController::Uninit()
{
	delete[] enemies;
}

void EnemyController::Move()
{
	for (int i = 0; i < currentEnemiesSize; ++i) {
		enemies[i].Move(EnemyDirection::LeftDirection, 2);
	}
}

void EnemyController::DamageAll()
{
	for (int i = 0; i < currentEnemiesSize; ++i) {
		enemies[i].Shoot(i + 1);
	}
}

int EnemyController::CountKilledEnemies()
{
	unsigned int counter = 0;
	for (int i = 0; i < currentEnemiesSize; ++i) {
		enemies[i].IsDead() ? counter++ : 0;
	}
	return counter;
}

bool EnemyController::SpawnEnemy()
{
	if (currentEnemiesSize < maxEnemies) {
		Enemy en;
		en.Init(startinLocation, ENEMY_HEALTH);
		enemies[currentEnemiesSize] = en;
		currentEnemiesSize++;
		return true;
	}
	return false;
}
