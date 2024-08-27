#ifndef CHARACTER_CLASS_H
#define CHARACTER_CLASS_H

using std::string;

struct Character{

    int x;
    int y;
    string name;

    Character(string _name)
    :name(_name), x(0), y(0)
    {

    }

    void move(int _x, int _y)
    {
        x = _x;
        y = _y;
    }
};


#endif