#pragma once
#include "part.h"
class car
{
public:
    float weight;
    std::string carEngine;
    std::string wheel1;
    std::string wheel2;
    std::string wheel3;
    std::string wheel4;
    car()
    {
        weight=0;
        carEngine="noEngine";
        wheel1="noWheel";
        wheel2="noWheel";
        wheel3="noWheel";
        wheel4="noWheel";
    }

    int get_total_weight() const
    {
        return static_cast<int>(weight);
    }

    void set_engine(engine* a)
    {
        if(carEngine=="Fuel")
        {
            weight += a->weight - 700;
        }
        else if(carEngine=="Diesel")
        {
            weight += a->weight - 500;
        }
        else
        {
            weight += a->weight;
        }
        
        carEngine = a->name;
    }

    void set_wheels(wheel* a, wheel* b, wheel* c, wheel* d)
    {
        weight += a->weight;
        wheel1 = a->name;

        weight += b->weight;
        wheel2 = b->name;

        weight += c->weight;
        wheel3 = c->name;

        weight += d->weight;
        wheel4 = d->name;
    }

    void print_parts() const
    {

        std::cout << "Engine :" << carEngine << ", Wheel1 :" << wheel1 << ", Wheel2 :" << wheel2 << ", Wheel3 :" << wheel3 << ", Wheel4 :" << wheel4 << std::endl;
    }

    ~car()
    {
    }
};