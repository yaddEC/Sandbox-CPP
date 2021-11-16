
#pragma once
#include "entity.h"
using namespace entities;
namespace day_04
{
    namespace ex_02
    {
        class non_playable_character : public entity
        {
        public:
            non_playable_character()
            {
                HP = 5;
                std::cout << "NPC is born!" << std::endl;
            }

            std::string to_string() const override
            {
                return "day_04::ex_01::non_playable_character";
            }
            ~non_playable_character()
            {

                std::cout << "NPC is dead!" << std::endl;
            }

            void operator*(entity &a)
            {
                HP -= a.ATK;
            }

        };

    }
}
