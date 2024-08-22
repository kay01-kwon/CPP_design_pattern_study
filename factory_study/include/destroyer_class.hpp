#ifndef DESTROYER_CLASS_HPP
#define DESTROYER_CLASS_HPP
#include "battleship_class.hpp"

class Destroyer: public Battleship{

    public:
    Destroyer()
    {
        cout << "Destroyer constructor" << endl;
    }

    virtual ~Destroyer()
    {
        cout << "Destroyer destructor" << endl;
    }

    virtual void fire()
    {
        cout << "Destroyer firing" << endl;
    }

    virtual void steer()
    {
        cout << "Destroyer steering " << endl;
    }

};


#endif