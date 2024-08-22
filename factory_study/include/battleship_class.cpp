#include "battleship_class.hpp"
#include "carrier_class.hpp"
#include "destroyer_class.hpp"

Battleship * Battleship::CreateShip(ShipType ship_type)
{
    switch(ship_type)
    {
        case ShipType::Destroyer:
            return new Destroyer();
            break;
        case ShipType::Carrier:
            return new Carrier();
            break;
        default:
            cout << "Invalid ship type" << endl;
            return nullptr;
            break;
    }
}