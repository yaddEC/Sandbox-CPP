#include <iostream>

int static numcat;

namespace day_02
{
    namespace ex_06
    {

        class cat
        {

        private:
            int number;

        public:
            std::string name;
            friend std::ostream &operator<<(std::ostream &os, cat &dt)
            {

                return os << dt.get_name();
            }

            void operator=(sloth &b)
            {

                name = b.name;
            }

            void operator=(cat &b)
            {

                name = b.get_name();
            }

            cat(std::string &b)
            {
                numcat++;
                number = numcat;
                name = b;
                std::cout << "cat " << name << " is alive!" << std::endl;
            }

            cat(const sloth &b)
            {

                numcat++;
                number = numcat;
                name = b.name;
                std::cout << "cat " << name << " is alive!" << std::endl;
            }

            cat(const cat &b)
            {
                numcat++;
                number = numcat;
                name = b.name;
                std::cout << "cat " << name << " is alive!" << std::endl;
            }

            const std::string get_name()
            {
                return name;
            }

            ~cat()
            {
                std::cout << "cat " << name << " died! Why did you do that?!" << std::endl;
            }

            int static get_nb_cat()
            {
                return numcat;
            }
        };

    }

}
