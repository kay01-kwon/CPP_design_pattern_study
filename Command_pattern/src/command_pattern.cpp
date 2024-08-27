#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "character_class.h"
#include "move_class.h"

using std::vector;

int main(int argc, char** argv)
{
    srand(time(NULL));
    Character character("John");
    // Move move;
    vector<Command*> command_ques;

    command_ques.reserve(5);

    command_ques.push_back(new Move);
    command_ques.push_back(new Move);
    command_ques.push_back(new Move);
    command_ques.push_back(new Move);

    for(auto& command: command_ques)
    {
        command->execute(character);
    }

    for(int i = command_ques.size()-1; i >= 0; i--)
    {
        command_ques[i]->undo(character);
    }



    
    return 0;
}