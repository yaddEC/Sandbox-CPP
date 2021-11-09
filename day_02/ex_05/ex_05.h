#include <iostream>
int static numSloth;

namespace day_02
{
    namespace ex_05
    {

        class sloth
        {

        private:
            int number;
            std::string name;


        public:
           friend std::ostream& operator<<(std::ostream& os, sloth& dt)
            {

                return os << dt.get_name();
            }

            void operator=(const sloth& b)
            {
                name = b.name;
               
            }
            
            
            
            sloth(std::string b)
            {
                numSloth++;
                number = numSloth;
                name = b;
                std::cout << "Sloth " << name << "[" << number << "] is alive!" << std::endl;
               
            }

           
            
            

            std::string get_name()
            {
                return name;
            }

            ~sloth()
            {
                std::cout << "Sloth " << name << "[" << number << "] died! Why did you do that?!" << std::endl;
            }
            

            int static get_nb_sloth()
            {
                return numSloth;
            }
        };

    }

}
