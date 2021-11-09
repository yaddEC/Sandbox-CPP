#include <iostream>

void print(int a)
{
    std::cout << "Global print int " << a << std::endl;
}

void assert(bool a)
{
    if (a == true)
    {
        std::cout << "true" << std::endl;
    }
    else
    {
        std::cout << "false" << std::endl;
    }
}

void print(float a)
{
    std::cout << "Global print float " << a << std::endl;
}

namespace day_01
{
    namespace ex_09
    {
        int static kenny = 9;
        void print()
        {
            std::cout << "Local print kenny " << kenny << std::endl;
        }

    }

}

int static c = day_01::ex_09::kenny;

namespace a
{
    void print(int a)
    {
        std::cout << "Global print int " << a << std::endl;
    }
    namespace a
    {
        using day_01::ex_09::kenny;
        void print(int a)
        {
            std::cout << "Local print int " << a << std::endl;
        }
        void print(float a)
        {
            std::cout << "Local print int " << a << std::endl;
        }
    }
    namespace b
    {
        using day_01::ex_09::kenny;

        void p(char a)
        {
            std::cout << "Global print int " << a + 0 << std::endl;
        }
        void p(float a)
        {
            std::cout << "Global print float " << a << std::endl;
        }

        void print(int a)
        {
            std::cout << "Global print int " << a << std::endl;
        }
    }
}
