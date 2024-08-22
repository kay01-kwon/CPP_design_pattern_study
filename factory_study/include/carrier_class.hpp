#ifndef CARRIER_CLASS_HPP
#define CARRIER_CLASS_HPP
#include "battleship_class.hpp"

class Carrier: public Battleship{

public:

    Carrier()
    {
        cout << "Carrier constructor" << endl;
    }

    virtual ~Carrier()
    {
        cout << "Carrier destructor" << endl;
    }

    virtual void fire()
    {
        cout << "Carrier firing" << endl;
    }

    virtual void steer()
    {
        cout << "Carrier steering " << endl;
    }

};


#endif