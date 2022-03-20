// WEEK4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Sort.h"

int main()
{
    int lista[]{ 5,3,1,6 };
    char stringNumbers[] = "3,6,2,6";
    Sort v1 = Sort(6, 4, 15);
    Sort v2 = Sort(stringNumbers);
    Sort v3 = Sort(4, lista);
    Sort v4 = Sort(8, 2, 7, 1, 26, 1, 6, 82, 34);

    std::cout << "Before sorting " << '\n';
    v1.Print();
    v1.BubbleSort();
    std::cout << '\n';
    std::cout << "After sorting " << '\n';
    v1.Print();
    std::cout << '\n';
    std::cout << '\n';

    std::cout << "Before sorting " << '\n';
    v2.Print();
    v2.BubbleSort();
    std::cout << '\n';
    std::cout << "After sorting " << '\n';
    v2.Print();
    std::cout << '\n';
    std::cout << '\n';

    std::cout << "Before sorting " << '\n';
    v3.Print();
    v3.BubbleSort(true);
    std::cout << '\n';
    std::cout << "After sorting " << '\n';
    v3.Print();
    std::cout << '\n';
    std::cout << '\n';

    std::cout << "Before sorting " << '\n';
    v4.Print();
    v4.BubbleSort(true);
    std::cout << '\n';
    std::cout << "After sorting " << '\n';
    v4.Print();
    std::cout << '\n';
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
