#include "battleship_class.hpp"
#include "scoped_ptr.hpp"

int main(int argc, char** argv)
{

    scoped_ptr<Battleship> test_destroyer(Battleship::CreateShip(ShipType::Destroyer));

    test_destroyer->fire();
    test_destroyer->steer();

    scoped_ptr<Battleship> test_carrier(Battleship::CreateShip(ShipType::Carrier));

    test_carrier->fire();
    test_carrier->steer();

    return 0;
}