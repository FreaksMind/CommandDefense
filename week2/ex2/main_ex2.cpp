#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "GlobalFunctions.h"
/*
	Design a C++ class that reflects the properties of an wave of  enemies. The class should include the following:
 - methods to set and get the name of the wave
 - methods to set and get the number of enemies  (must be bigger than 0)
 - methods to set and get the starting health (bigger than 0)
 - methods to set and get the money per enemy (must be a float value)
	Create 2 global functions that compare two wave in terms of: number of enemies and money per enemy.
If two waves are equal the return value of such a function will be 0. If the first wave is bigger than the second one, the return value will be 1, otherwise -1.
	Make sure that you have the following:
a cpp file for the methods specific to the class
a header file for the global functions
a cpp file for the global functions implementation
a main.cpp file that shows how the methods and global functions can be used.
*/

int main()
{

	EnemyWave wave1, wave2;

	wave1.SetName((char*)"WWW1");
	wave1.SetEnemyNumber(5);
	wave1.SetStartingHealth(60);
	wave1.SetMoneyPerEnemy(6.4f);	
	
	wave2.SetName((char*)"WWW2");
	wave2.SetEnemyNumber(5);
	wave2.SetStartingHealth(100);
	wave2.SetMoneyPerEnemy(6.4f);
	std::cout << '\n';
	std::cout << "Comparation of two waves(enemynumber): " << CompareEnemiesNumber(&wave1,&wave2) << '\n' << '\n';
	std::cout << "Comparation of two waves(moneyperenemy): " << CompareMoneyPerEnemy(&wave1, &wave2) << '\n' << '\n';
	wave1.PrintWaveInfo();
	wave2.PrintWaveInfo();
	return 0;
}