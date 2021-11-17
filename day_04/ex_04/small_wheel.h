#pragma once
#include "part.h"
namespace day_04{
    class small_wheel : public wheel
    {

    public:
    
         small_wheel()
        {
            name = "SmallWheel";
            weight = 20;
            size = 5;
            
        }
  

        ~small_wheel()
        {
            std::cout << "Destroying part SmallWheel" << std::endl;
        }
    };

}
