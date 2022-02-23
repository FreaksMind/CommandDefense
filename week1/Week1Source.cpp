#include "Week1Header.h"
#include <string>

int Sum(int a, int b) { return a + b; }
int Dif(int a, int b) { return a - b; }
int Mul(int a, int b) { return a * b; }
int Div(int a, int b) { return a / b; }

void ParseSources()
{
    char input[38] = "---H***E+++L+++L///O---P+++O/+-**O---";
	func Operatori[4] = {Sum, Dif, Mul, Div};
	int S = 0, V;
    Content x;
    x.p1 = 0;
    x.p2 = 0;
	int idx;

	for (int i = 0; i < strlen(input); i++)
	{
		switch (input[i] - 42)
		{
			case INMULTIRE:
				idx = 2;
				x.p1 = 3;
				x.p2 = 3;
                break;
			case SUMA:
				idx = 0;
				x.p1 = 7;
				x.p2 = 5;
                break;
			case DIFERENTA:
				idx = 1;
				x.p1 = 10;
				x.p2 = 1;
                break;
			case IMPARTIRE:
				idx = 3;
				x.p1 = 8;
				x.p2 = 4;
                break;
		}

		S = S + Operatori[idx](x.p1, x.p2);
	}

	//S=337
	printf("S = %d\n", S);
}

// Week 1 - using C API
void ReadTopScore()
{
    const char* filen = "UserScores.txt";

    char nume;
    int score;
    char numeMax;
    int max = 0;

	FILE* fp;
	fopen_s(&fp, filen, "r");

	if (fp == NULL)
    {
        exit(1);
	}

   while (!feof(fp))
    {
        fscanf_s(fp, "%c", &nume);
        fscanf_s(fp, "%d\n", &score);
        if (max < score)
        {
           numeMax = nume;
           max = score;
		}
    }
    printf("%c ", numeMax);
    printf("%d", max);
	fclose(fp);
    // open file "UserScores.txt"

    // read line by line: Name Points

    // print the name with biggest points

    // close file
}