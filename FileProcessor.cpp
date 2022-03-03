#include "Translator.h"
#include "Model.h"
#include "FileProcessor.h"

#include <fstream>

FileProcessor::FileProcessor(){}

FileProcessor::~FileProcessor(){}

/*
This methods takes the name of the file input and the name of the file
output as parameters
It reads from the fileInput and writes the translation to the new file
Uses the fstream class to read and write to the file
*/
void FileProcessor::processFile(string fileInput, string fileOutput){

  Translator translate;
  string sentence;

  ofstream newFile(fileOutput);
  ifstream readFile(fileInput);

  /*
  Uses while loop to read each sentence from the file
  Then, it uses the method 'translateEnglishSentence' from the Translator class
  to translate the text
  It writes the translation to the new file
  */


  while (getline(readFile, sentence)){
    newFile << translate.translateEnglishSentence(sentence) << endl;

  }

  //close the file reader and writer
  newFile.close();
  readFile.close();
}

void FileProcessor::processTutFile(string fileInput, string fileOutput){

  Translator translate;
  string sentence;
  ofstream newFile(fileOutput);
  ifstream readFile(fileInput);
  /*
  Uses while loop to read each sentence from the file
  Then, it uses the method 'translateEnglishSentence' from the Translator class
  to translate the text
  It writes the translation to the new file
  */
  while (getline(readFile, sentence)){
    newFile << translate.translateTutneseSentence(sentence) << endl;

  }
  //close the file reader and writer
  newFile.close();
  readFile.close();
}
