#pragma once
#include "part.h"
namespace day_04{
    class big_wheel : public wheel
    {

    public:
    
         big_wheel()
        {
             name = "BigWheel";
            weight = 50;
            size = 10;
            
        }
  

        ~big_wheel()
        {
            std::cout << "Destroying part BigWheel" << std::endl;
        }
    };

}
