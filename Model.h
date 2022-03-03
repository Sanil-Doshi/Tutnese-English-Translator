#include <iostream>

using namespace std;

class Model{

public:
  Model(); //Default Constructor
  ~Model(); //Destructor

  //methods that translate a single or double character
  string translateSingleCharacter(char singleCharacter);
  string translateDoubleCharacter(char doubleCharacter);
};
