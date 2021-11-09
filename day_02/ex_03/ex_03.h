int static numSloth;
namespace day_02
{
    namespace ex_03
    {
        class sloth
        {
        private:
        int number;
        public:
            sloth()
            {
                numSloth++;
                number = numSloth;
                std::cout << "Sloth " << number <<" is alive!" << std::endl;
            }
            ~sloth()
            {
                std::cout << "Sloth " << number <<" died! Why did you do that?!" << std::endl;
            }
        };

    }

}
