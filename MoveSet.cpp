#include "MoveSet.h"

#include "Monkey.h"
#include "Ninja.h"
#include "Paper.h"
#include "Pirate.h"
#include "Robot.h"
#include "Rock.h"
#include "Scissors.h"
#include "Zombie.h"

// Function receives string and returns corresponding object
Move* MoveSet::getMove(std::string move) {
  if (move == "Rock") {
    return new Rock();
  } else if (move == "Paper") {
    return new Paper();
  } else if (move == "Scissors") {
    return new Scissors();
  } else if (move == "Monkey") {
    return new Monkey();
  } else if (move == "Ninja") {
    return new Ninja();
  } else if (move == "Pirate") {
    return new Pirate();
  } else if (move == "Robot") {
    return new Robot();
  } else if (move == "Zombie") {
    return new Zombie();
  } else {
    return nullptr;
  }
}
