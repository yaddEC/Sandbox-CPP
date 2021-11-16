#pragma once
#include "part.h"
namespace day_04{
    class fuel : public engine
    {

    public:
    
         fuel()
        {
            name = "Fuel";
            weight=700;
            conso=7;
            power=6;
            
        }
  

        ~fuel()
        {

            std::cout << "Destroying part Fuel" << std::endl;
        }
    };

   
}