int static numSloth;
namespace day_02
{
    namespace ex_04
    {
        class sloth
        {
        private:
            int number;
            int sleep = 1;
            int move = 0;

        public:
            void isAsleep()
            {
                if (sleep == 0)
                {
                    std::cout << "Sloth " << number << " stop sleeping." << std::endl;
                }
                if (sleep == 1)
                {
                    std::cout << "Sloth " << number << " falls asleep" << std::endl;
                }
                if (sleep > 1)
                {
                    std::cout << "Sloth " << number << " is already sleeping" << std::endl;
                    sleep = 1;
                }
                if (sleep < 0)
                {
                    sleep = 0;
                }
            }
            void isMoving()
            {
                if (move == 0)
                {
                    std::cout << "Sloth " << number << " stop moving." << std::endl;
                }
                if (move == 1)
                {
                    std::cout << "Sloth " << number << " start moving." << std::endl;
                }
                if (move > 1)
                {
                    std::cout << "Sloth " << number << " is already moving." << std::endl;
                    move = 1;
                }
                if (move < 0)
                {
                    move = 0;
                }
            }
            sloth()
            {
                numSloth++;
                number = numSloth;
                std::cout << "Sloth " << number << " is alive!" << std::endl;
                isAsleep();
            }
            ~sloth()
            {
                std::cout << "Sloth " << number << " died! Why did you do that?!" << std::endl;
            }
            void start_moving()
            {
                
                sleep--;
                move++;

                isAsleep();
                isMoving();
            }
            void start_sleeping()
            {
                move--;
                sleep++;
                isMoving();

                isAsleep();
            }
        };

    }

}
