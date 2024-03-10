#include "Human.h"

#include <iostream>
#include <string>

#include "MoveSet.h"
#include "Player.h"
Human::Human(std::string name) { this->name = name; };
Human::Human() { this->name = "Human"; };

// Use the MoveSet class to check for valid move
// Returns pointer to object
Move* Human::makeMove() {
  MoveSet* MoveSet;
  std::string move;
  std::cout << "Enter move:";
  std::cin >> move;
  return (MoveSet->getMove(move));
};

std::string Human::getName() { return (name); };
