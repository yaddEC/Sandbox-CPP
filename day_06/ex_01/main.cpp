#include "ex_01.h"

int main(int, char *[])
{
    char a = 78;
    char b = 79;
     std::cout << "AVANT" << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;

    day_06::ex_01::swap<char>(a, b);
   

    std::cout << "APRES" << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
}
