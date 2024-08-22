#ifndef BATTLESHIP_CLASS_HPP
#define BATTLESHIP_CLASS_HPP

#include <iostream>

using std::cout;
using std::endl;

enum class ShipType
{
    Destroyer,
    Carrier
};

class Battleship{

public:

    Battleship()
    {
        cout << "Battleship constructor" << endl;
    }

    virtual ~Battleship()
    {
        cout << "Battleship destructor" << endl;
    }

    static Battleship* CreateShip(ShipType ship_type);


    virtual void fire() = 0;
    virtual void steer()= 0;

};


#endif