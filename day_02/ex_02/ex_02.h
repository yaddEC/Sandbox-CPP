#include <iostream>
namespace day_02
{
    namespace ex_02
    {
        class sloth
        {
        public:
            sloth()
            {
                std::cout << "Sloth is alive!" << std::endl;
            }
            ~sloth()
            {
                std::cout << "Sloth died! Why did you do that?!" << std::endl;
            }
        };

    }

}
