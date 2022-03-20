#include "Sort.h"

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

Sort::Sort()
{
    elementsNumber = 0;
    lista = new int(elementsNumber);
}

Sort::Sort(int count, ...)
{
    elementsNumber = count;
    lista = (int*)(malloc(count * sizeof(int)));
    va_list args;
    va_start(args, count);
    for (int i = 0; i < elementsNumber; ++i) {
        lista[i] = va_arg(args, int);
    }
    va_end(args);
}


Sort::Sort(int count, int list[])
{
    elementsNumber = count;
    lista = (int*)(malloc(count * sizeof(int)));
    for (int i = 0; i < elementsNumber; ++i) {
        lista[i] = list[i];
    }
}

Sort::Sort(char* list)
{
    lista = (int*)(malloc(128 * sizeof(int)));
    char* numere = strtok(list, ",");
    int count = 0;
    while (numere != NULL)
    {
        int numarI = std::stoi(numere, nullptr, 10);
        lista[count] = numarI;
        numere = strtok(NULL, ",");
        count++;
    }
    elementsNumber = count;

}

Sort::Sort(int count, int min, int max)
{
    elementsNumber = count;
    lista = (int*)(malloc(count * sizeof(int)));
    srand(time(NULL));
    for (int i = 0; i < count; ++i) {
        lista[i] = (int)(rand() % max + min);
    }




}

Sort::~Sort()
{
    delete lista;
}

void Sort::BubbleSort(bool ascendent)
{
    int i, j;
    for (i = 0; i < elementsNumber - 1; i++)

        for (j = 0; j < elementsNumber - i - 1; j++)
            switch (ascendent)
            {
            case true:
                if (lista[j] > lista[j + 1])
                    swap(&lista[j], &lista[j + 1]);
                break;
            case false:
                if (lista[j] < lista[j + 1])
                    swap(&lista[j], &lista[j + 1]);
                break;
            }
}

void Sort::Print()
{
    for (int i = 0; i < elementsNumber; ++i) {
        std::cout << lista[i] << ' ';
    }
}

int Sort::GetElementsCount()
{
    return elementsNumber;
}

int Sort::GetElementFromIndex(int index)
{
    return lista[index];
}
