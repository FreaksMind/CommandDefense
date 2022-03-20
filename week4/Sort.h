#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <cstdarg>
#include <time.h>
#include <iostream>
#include <string>

class Sort

{

    int* lista;
    int elementsNumber;

public:

    Sort();
    Sort(int count, ...);
    Sort(int count, int list[]);
    Sort(char *list);
    Sort(int count, int min, int max);

    ~Sort();
    // add constuctors

    void InsertSort(bool ascendent = false);

    void QuickSort(bool ascendent = false);

    void BubbleSort(bool ascendent = false);

    void Print();

    int  GetElementsCount();

    int  GetElementFromIndex(int index);

};