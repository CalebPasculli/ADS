#include "Player.h"
#include <string>
#include "Computer.h"

Computer::Computer(){move = 'R';}

char Computer::makeMove(){
    return('R');
}
std::string Computer::getName(){
    std::string name = "Computer";
    return(name);
}
