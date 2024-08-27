#ifndef COMMAND_PATTERN_CLASS_H
#define COMMAND_PATTERN_CLASS_H
#include <iostream>
#include <string>
#include <vector>
#include "character_class.h"

using std::cout;
using std::endl;

class Command {

    public:
        virtual ~Command() {};
        virtual void execute(Character& character) = 0;
        virtual void undo(Character& character) = 0;

};

#endif