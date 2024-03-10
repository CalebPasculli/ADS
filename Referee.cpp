#include "Human.h"
#include <string>
#include "Referee.h"
#include "MoveSet.h"
Referee::Referee(){}


Player * Referee::refGame(Player * player1, Player * player2){
MoveSet MoveSet;
Move* player1_move = player1->makeMove(&MoveSet);
Move* player2_move = player2->makeMove(&MoveSet);

switch(player1_move->checkWin(player2_move)) {
    case 1: return player1;
    case 2: return player2;
    case 3: return nullptr;
    case 4: return nullptr;//invalid game
}

}
