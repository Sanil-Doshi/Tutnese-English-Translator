#include "Model.h"
#include "Translator.h"
#include "FileProcessor.h"

#include <iostream>
#include <string>
#include <stdexcept>
int main(int argc, char* argv[]){

  FileProcessor fileProcessor; //instatiates File Processor

  string Eng2Tut = "E2T";
  string Tut2Eng = "T2E";

  //checks third argument when the program runs
  if (argv[3] == Eng2Tut){

    fileProcessor.processFile(argv[1], argv[2]);

  } else if (argv[3] == Tut2Eng){

    fileProcessor.processTutFile(argv[1], argv[2]);

  } else {

    cout << "Invalid arguments were passed!" << endl;
  }
  return 0;

}
