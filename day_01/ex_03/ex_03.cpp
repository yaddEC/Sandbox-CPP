
#include <iostream>
#include "ex_03.h"

int	main()
{

    int ai = 2;
    int a2 = 2;
    int a3 = add(ai, a2);

    float fi = 2.2;
    float f2 = 3.2;
    float f3 = add(fi, f2);

    double ki = 2.25;
    double k2 = 2.2;
    double k3 = add(ki, k2);

   unsigned int gi = 2;
   unsigned int g2 = 2;
   unsigned int g3 = add(gi, g2);

    unsigned int f5=add(ki);
    std::cout << "a3: " << g3 << std::endl;
    std::cout << "f3: " << f3 << std::endl;
    std::cout << "k3: " << k3 << std::endl;
    std::cout << "g3: " << g3 << std::endl;
    std::cout << "f5: " << f5 << std::endl;

}