#include "Week1Header.h"

int Sum(int a, int b) { return a + b; }
int Dif(int a, int b) { return a - b; }
int Mul(int a, int b) { return a * b; }
int Div(int a, int b) { return a / b; }

void ParseSources()
{
	char input[7] = "*O---";
	func Operatori[4] = {Sum, Dif, Mul, Div};
	int S, V;
    Content x = { 0,0 };
	int idx;

	for (int i = 0; i < strlen(input); i++)
	{
		switch (input[i] - 42)
		{
			case INMULTIRE:
				idx = 2;
				x.p1 = 3;
				x.p2 = 3;
			case SUMA:
				idx = 0;
				x.p1 = 7;
				x.p2 = 5;
			case DIFERENTA:
				idx = 1;
				x.p1 = 10;
				x.p2 = 1;
			case IMPARTIRE:
				idx = 3;
				x.p1 = 8;
				x.p2 = 4;
		}

		S = S + Operatori[idx](x.p1, x.p2);
	}

	//S=337
	printf("S = %d\n", S);
}

// Week 1 - using C API
void ReadTopScore()
{
    // open file "UserScores.txt"

    // read line by line: Name Points

    // print the name with biggest points

    // close file
}