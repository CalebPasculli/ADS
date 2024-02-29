#include "Human.h"
#include <string>
#include "Referee.h"

Referee::Referee(){}


Player * Referee::refGame(Player * player1, Player * player2){
char player1_move = player1->makeMove();
char player2_move = player2->makeMove();
if (player1_move == player2_move){
    return(nullptr);
}else if (player1_move=='S' && player2_move=='R'){
    return(player2);
}else if (player1_move=='R' && player2_move=='S'){
    return(player2);
}else if (player1_move=='P' && player2_move=='R'){
    return(player1);
}else if (player1_move=='R' && player2_move=='P'){
    return(player2);
}else if (player1_move=='S' && player2_move=='P'){
    return(player1);
}else if (player1_move=='P' && player2_move=='S'){
    return(player2);
}
}
