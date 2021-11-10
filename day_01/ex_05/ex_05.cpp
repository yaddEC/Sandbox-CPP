#include <iostream>
#include "ex_05.h"

int main()
{
    day_01::ex_05::is_nullptr(day_01::ex_05::b);
    int g = 5;
    day_01::ex_05::b=&g;
    day_01::ex_05::is_nullptr(day_01::ex_05::b);
    return 0;
}
