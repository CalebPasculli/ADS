#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include "Move.h"
#include "MoveSet.h"
class Player{
    private:
    public:
    virtual Move* makeMove() = 0;
    virtual  std::string getName() = 0;
};
#endif