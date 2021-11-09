#include <iostream>
int static numSloth;

namespace day_02
{
    namespace ex_06
    {

        class sloth
        {

        private:
            int number;
            

        public:
             std::string name;
            friend std::ostream &operator<<(std::ostream &os, sloth &dt)
            {

                return os << dt.get_name();
            }

            void operator=( sloth &b)
            {
                name = b.name;
            }

            sloth(std::string b)
            {
                numSloth++;
                number = numSloth;
                name = b;
                std::cout << "Sloth " << name << " is alive!" << std::endl;
            }

            sloth(sloth &b)
            {
                numSloth++;
                number = numSloth;
                name = b.name;
                std::cout << "Sloth " << name << " is alive!" << std::endl;
            }

            const std::string get_name()
            {
                return name;
            }

            ~sloth()
            {
                std::cout << "Sloth " << name << " died! Why did you do that?!" << std::endl;
            }

            int static get_nb_sloth()
            {
                return numSloth;
            }
        };

    }

}
