#include "move_class.h"

void Move::execute(Character& character)
{

    int random_x = rand() % 4;
    int random_y = rand() % 4;

    character.move(random_x, random_y);

    x = random_x;
    y = random_y;

    cout << character.name << " moved to " 
    << x << ", " << y << endl;

}

void Move::undo(Character& character)
{
    cout << character.name << " moved back to ";
    character.move(-x, -y);
    cout << -x << ", " << -y << endl;
}