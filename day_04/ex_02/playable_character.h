#pragma once
#include "entity.h"
using namespace entities;
namespace day_04
{
    namespace ex_02
    {

        class playable_character : public entity
        {
        public:
           
            playable_character()
            {
                ATK = 4;
                HP = 20;
            }
            playable_character operator*(entity &a)
            {
                a.HP -= ATK;
                return *this;
            }

            
            std::string to_string() const override
            {
                return "day_04::ex_01::playable_character";
            }
        };

    }
}
