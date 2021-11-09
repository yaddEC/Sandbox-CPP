#include <iostream>
namespace day_01
{
    namespace ex_07
    {
        void read()
        {
            char *string = new char[50];
            scanf("%s", string);
            for (int i = 0; i < 50; i++)
            {
                if (string[i] == 0)
                {
                    std::cout << "GOOD JOB! " << string[i] << std::endl;
                    break;
                }
                if (string[i] <= 57 && string[i] >= 48)
                {
                    std::cout << "BAD END " << std::endl;
                    break;
                }
            }
        }

    }

}
