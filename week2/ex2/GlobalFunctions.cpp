
#include "GlobalFunctions.h"

int CompareEnemiesNumber(EnemyWave* w1, EnemyWave* w2) {
	if (w1->GetEnemyNumber() == w2->GetEnemyNumber())
		return 0;
	if (w1->GetEnemyNumber() < w2->GetEnemyNumber())
		return -1;
	else
		return 1;
}

int CompareMoneyPerEnemy(EnemyWave* w1, EnemyWave* w2) {
	if (w1->GetMoneyPerEnemy() == w2->GetMoneyPerEnemy())
		return 0;
	if (w1->GetMoneyPerEnemy() < w2->GetMoneyPerEnemy())
		return -1;
	else
		return 1;
}