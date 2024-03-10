#include <iostream>

#include "Computer.h"
#include "Human.h"
#include "Referee.h"
int main() {
  Computer C;
  Human H("Caleb");
  Referee R;
  Player* Winner = R.refGame(&H, &C);

  if (Winner != nullptr) {
    std::cout << Winner->getName() << " Wins.\n";
  } else {
    std::cout << "It's a tie.\n";
  }
}