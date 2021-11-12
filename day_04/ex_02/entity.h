#pragma once
namespace entities{
class entity
{

public:
    int HP ;
    entity()
    {
        HP = 5;
    }

    int life()
    {
        return HP;
    }

    const std::string to_string()
    {
        return std::to_string(this&);
    }

    ~entity()
    {
    }
};

class object
{

public:
    int HP ;
    object()
    {
        HP = 5;
    }

    int life()
    {
        return HP;
    }

    const std::string to_string()
    {
        return std::to_string(this&);
    }

    ~object()
    {
    }
};
}