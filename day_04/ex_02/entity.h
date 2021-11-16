#pragma once
namespace entities
{
    class entity
    {

    public:
        int HP;
        int ATK;
         entity()
        {
            HP = 0;
        }
        void operator++()
        {
            HP++;
        }
        int life()
        {
            return HP;
        }

        void print_life()
        {
            std::cout << HP << std::endl;
        }

        virtual std::string to_string() const
        {
            return "day_04::ex_01::entity";
        }

        ~entity()
        {
        }
    };

    class object
    {

    public:
        int HP;
        object(entity &h)
        {
            HP = h.HP;
        }
        std::string to_string() const
        {
            return "day_04::ex_01::object";
        }
    };
}