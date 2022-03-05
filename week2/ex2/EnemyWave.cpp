#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

class EnemyWave {

private:
	char name[16];
	int enemyNumber;
	int startingHealth;
	float moneyPerEnemy;

public:

	void SetName(char newName[16]) {
		strcpy(name, newName);
	}

	char* GetName() {
		return name;
	}

	void SetEnemyNumber(int value) {
		if (value < 0) {
			printf("(%s) Provided value must be positive\n");
		}
		else {
			enemyNumber = value;
			printf("(%s) Number of enemies set to: %d\n", name, value);
		}

	}

	int GetEnemyNumber() {
		return enemyNumber;
	}

	void SetStartingHealth(int value) {
		if (value < 0) {
			printf("(%s) Provided value must be positive\n");
		}
		else {
			startingHealth = value;
			printf("(%s) Starting health set to: %d\n", name, value);
		}

	}

	int GetStartingHealth() {
		return startingHealth;
	}

	void SetMoneyPerEnemy(float value) {
			moneyPerEnemy = value;
			printf("(%s) Money per enemy set to: %.3f\n", name, value);
			//rounded to 3 decimals
	}

	float GetMoneyPerEnemy() {
		return moneyPerEnemy;
	}

	void PrintWaveInfo() {
		printf("*-------------------------Wave Info-------------------------*\nWave Name: %s\nWave Enemy Number: %d\nWave Starting Health: %d\nWave Money per Enemy: %.3f\n", name, enemyNumber, startingHealth,moneyPerEnemy);
	}

};
