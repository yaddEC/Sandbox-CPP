#include <iostream>
namespace day_06
{
    namespace ex_01
    {

        template <typename T>
        void swap(T &a, T &b)
        {
            const T c = a;
            a = b;
            b = c;
        }

    }

}
