#include <iostream>
#include "Math.h"
#include "Canvas.h"

int main()
{
    //Canvas ca(30,30);

    //ca.DrawLine(0, 0, 2, 2, '!');

    //int latime = 5;
    //int lungime = 10;

    //ca.FillRect(latime, lungime, latime, lungime, '@');
    //ca.DrawCircle(15, 15, 5, '@');
    //ca.Print();
    std::cout << Math::Add(1,2) << std::endl;
    std::cout << Math::Add(1,2,3) << std::endl;
    std::cout << Math::Add(2.1,2.2) << std::endl;
    std::cout << Math::Add(2.1,2.2,2.3) << std::endl;
    std::cout << Math::Add(4,1,2,3,4) << std::endl;
    std::cout << Math::Mul(2,2) << std::endl;
    std::cout << Math::Mul(2,2,2) << std::endl;
    std::cout << Math::Mul(3.3,3.3) << std::endl;
    std::cout << Math::Mul(3.3,3.3,3.3) << std::endl;
}
