int static numStudent=0;
namespace day_04
{
    namespace ex_01
    {
        class student
        {
        private:
        public:
            int number;
            student()
            {
                
                number = numStudent;
                numStudent++;
                std::cout << "student " << number << " created." << std::endl;
            }
             void operator=( student &b)
            {
                 std::cout << "student " << number << " become student " << b.number  << "." << std::endl;
                number = b.number;
                
            }
            ~student()
            {
                std::cout << "student " << number << " destroyed." << std::endl;
            }
        };
    }
}
