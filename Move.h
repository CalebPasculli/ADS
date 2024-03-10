#ifndef MOVE_H
#define MOVE_H
#include <string>
#include <vector>
class Move {
 protected:
  std::string name;
  std::vector<std::string> winList;
  std::vector<std::string> loseList;
  std::vector<std::string> tieList;

 public:
  std::string getName();
  int checkWin(Move* move);
};

#endif