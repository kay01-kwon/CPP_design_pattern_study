#ifndef MOVE_CLASS_H
#define MOVE_CLASS_H

#include <ctime>
#include <cstdlib>

#include "command_pattern_class.h"
#include "character_class.h"

class Move: public Command{
    public:

    virtual void execute(Character& character);

    virtual void undo(Character& character);

    private:

    int x, y;

};

#endif