#include "Reverser.h"

#include <iostream>
int Reverser::reverseDigit(int value) {
  std::string stringValue = std::to_string(value);
  if (stringValue.size() == 1 && value > 0) {
    return value;
  } else if (stringValue.size() > 1 && value > 0) {
    std::string stringValue1 = stringValue.substr(stringValue.size() - 1);
    value = stoi(stringValue.substr(0, stringValue.size() - 1));
    return stoi(stringValue1 + std::to_string(reverseDigit(value)));
  }
  return (-1);
}

std::string Reverser::reverseString(std::string characters) {
  if (characters.size() == 1) {
    return characters;
  } else if (characters.size() > 1) {
    std::string characters1 = characters.substr(characters.size() - 1);
    characters = characters.substr(0, characters.size() - 1);
    return characters1 + reverseString(characters);
  }
  return "ERROR";
}