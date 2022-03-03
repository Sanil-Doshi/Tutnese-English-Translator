#include <iostream>

using namespace std;

class Translator{

public:
  Translator(); //Default Constructor
  ~Translator(); //Destructor

  //methods to either translate a single word or a whole sentence
  string translateEnglishWord(string singleString);
  string translateEnglishSentence(string singleSentence);

  string translateTutneseWord(string tutneseString);
  string translateTutneseSentence(string tutneseSentence);
};
