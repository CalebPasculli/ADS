#include "Player.h"
#include <string>
#include "Computer.h"
#include "Rock.h"
Computer::Computer(){move = 'R';}

Move* Computer::makeMove(){
    MoveSet moveSet;
    return(moveSet.getMove("Rock"));
}
std::string Computer::getName(){
    std::string name = "Computer";
    return(name);
}
