#include "ex_01.h"

int main(int, char *[])
{
    int a = 5;
    int b = 6;
     std::cout << "AVANT" << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;

    day_02::ex_01::swap(a, b);
   

    std::cout << "APRES" << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
}
