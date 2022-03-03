#include <iostream>

using namespace std;

class FileProcessor {

public:
  FileProcessor(); //Default Constructor
  ~FileProcessor(); //Destructor


  //method that takes two file names as parameters
  void processFile(string fileInput, string fileOutput);
  void processTutFile(string fileInput, string fileOutput);

};
