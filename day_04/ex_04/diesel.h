#pragma once
#include "part.h"
namespace day_04{

class diesel : public engine
{

public:
    diesel()
    {
        name = "Diesel";
        weight = 500.000000;
        conso = 2;
        power = 3;
    }

    ~diesel()
    {

        std::cout << "Destroying part Diesel" << std::endl;
    }
};
}