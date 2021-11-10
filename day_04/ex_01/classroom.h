
namespace day_04
{
    namespace ex_01
    {
        class classroom
        {
        private:
        public:
            int studentCount;
            student *students;
            classroom(classroom &b)
            {
                studentCount = b.studentCount;
                students = new student[b.studentCount];

                for(int i=0;i<studentCount;i++)
                {
                    students[i]=b.students[i];
                }
            }
            classroom(int a)
            {
                studentCount = a;
                students = new student[a];
            }
            void operator=(classroom &b)
            {
            }
            ~classroom()
            {
                delete[] students;
            }
        };

    }
}
