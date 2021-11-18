

class Test
{
public:
    Test() { std::cout << "Test::Test()" << std::endl; }
    Test(Test const &) { std::cout << "Test::Test(Test const&)" << std::endl; }
    ~Test() { std::cout << "Test::~Test()" << std::endl; }
    Test &operator=(Test const &)
    {
        std::cout << "Test& Test::operator=(Test const&)" << std::endl;
        return *this;
    }

    void print() const { std::cout << "Test::print() const" << std::endl; }
    void print() { std::cout << "Test::print()" << std::endl; }
};

template <class T>
class SmartPtr
{
private:
    T *value;
    int *inc;

public:
    SmartPtr()
    {
        value = nullptr;
        inc = new int;
        *inc = 1;
    }

    T &operator*()
    {
        return *value;
    }
    void reset()
    {
        (*inc)--;

        value = {nullptr};
    }

    SmartPtr &operator=(SmartPtr const &a)
    {
        (*inc)--;
        if (*inc <= 1)
        {

            delete inc;
        }

        value = a.value;
        inc = a.inc;
        *inc = *inc + 1;
        return *this;
    }

    explicit operator bool() const
    {
        return (value != nullptr);
    }

    SmartPtr(T *a)
    {
        value = a;
        inc = new int;
        *inc = 1;
    }

    SmartPtr(SmartPtr const &a)
    {
        if (*inc <= 1)
            delete inc;
        value = a.value;
        inc = a.inc;
        *inc = *inc + 1;
    }

    T *operator->()
    {
        return value;
    }
    ~SmartPtr()
    {
        if (*inc == 1)
        {
            delete value;
            delete inc;
        }
        else if (*inc < 1)
        {
            delete value;
        }
        else
        {
            *inc = *inc - 1;
        }
    }
};

template <class B, typename C>
class Array
{
private:
public:
    Array()
    {
    }
};
