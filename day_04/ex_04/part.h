#pragma once
class part
{
public:
float weight;
std::string name;
    part()
    {
    }
   
    std::string get_name() const
    {
        return name;

    }

    int get_weight() const
    {
        return static_cast<int>(weight);

    }
    ~part()
    {
    }
};

class engine: public part
{
public:
int conso;
int power;
 
    engine()
    {
         

    }

    operator std::string() const{
     std::string str;
     str = name+": weight = "+std::to_string(weight)+ ", consommation = "+ std::to_string(conso)+", power ="+std::to_string(power);
    return str;

    }
    ~engine()
    {
    }
};

class wheel: public part
{
public:
float size;

    wheel()
    {
        
    }

     operator std::string() const{
     std::string str;
     str = name+": weight = "+std::to_string(weight)+ ", size= "+ std::to_string(size);
    return str;

    }
    ~wheel()
    {
    }
};
