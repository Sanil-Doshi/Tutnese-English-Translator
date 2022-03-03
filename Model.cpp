#include "Model.h"

#include <fstream>

Model::Model(){}

Model::~Model(){}

/*
This method takes a single char as a parameter and translates it into its
respective Tutnese translation
Uses switch statement to identify and translate the character and returns it
as a string
*/
string Model::translateSingleCharacter(char singleCharacter){

  string tutneseTranslation;

  switch(singleCharacter){

    case 'a':
      tutneseTranslation = "a";
      return tutneseTranslation;
    case 'b':
      tutneseTranslation = "bub";
      return tutneseTranslation;
    case 'c':
      tutneseTranslation = "cash";
      return tutneseTranslation;
    case 'd':
      tutneseTranslation = "dud";
      return tutneseTranslation;
    case 'e':
      tutneseTranslation = "e";
      return tutneseTranslation;
    case 'f':
      tutneseTranslation = "fuf";
      return tutneseTranslation;
    case 'g':
      tutneseTranslation = "gug";
      return tutneseTranslation;
    case 'h':
      tutneseTranslation = "hash";
      return tutneseTranslation;
    case 'i':
      tutneseTranslation = "i";
      return tutneseTranslation;
    case 'j':
      tutneseTranslation = "jay";
      return tutneseTranslation;
    case 'k':
      tutneseTranslation = "kuck";
      return tutneseTranslation;
    case 'l':
      tutneseTranslation = "lul";
      return tutneseTranslation;
    case 'm':
      tutneseTranslation = "mum";
      return tutneseTranslation;
    case 'n':
      tutneseTranslation = "nun";
      return tutneseTranslation;
    case 'o':
      tutneseTranslation = "o";
      return tutneseTranslation;
    case 'p':
      tutneseTranslation = "pub";
      return tutneseTranslation;
    case 'q':
      tutneseTranslation = "quack";
      return tutneseTranslation;
    case 'r':
      tutneseTranslation = "rug";
      return tutneseTranslation;
    case 's':
      tutneseTranslation = "sus";
      return tutneseTranslation;
    case 't':
      tutneseTranslation = "tut";
      return tutneseTranslation;
    case 'u':
      tutneseTranslation = "u";
      return tutneseTranslation;
    case 'v':
      tutneseTranslation = "vuv";
      return tutneseTranslation;
    case 'w':
      tutneseTranslation = "wack";
      return tutneseTranslation;
    case 'x':
      tutneseTranslation = "ex";
      return tutneseTranslation;
    case 'y':
      tutneseTranslation = "yub";
      return tutneseTranslation;
    case 'z':
      tutneseTranslation = "zub";
      return tutneseTranslation;

    case 'A':
      tutneseTranslation = "A";
      return tutneseTranslation;
    case 'B':
      tutneseTranslation = "Bub";
      return tutneseTranslation;
    case 'C':
      tutneseTranslation = "Cash";
      return tutneseTranslation;
    case 'D':
      tutneseTranslation = "Dud";
      return tutneseTranslation;
    case 'E':
      tutneseTranslation = "E";
      return tutneseTranslation;
    case 'F':
      tutneseTranslation = "Fuf";
      return tutneseTranslation;
    case 'G':
      tutneseTranslation = "Gug";
      return tutneseTranslation;
    case 'H':
      tutneseTranslation = "Hash";
      return tutneseTranslation;
    case 'I':
      tutneseTranslation = "I";
      return tutneseTranslation;
    case 'J':
      tutneseTranslation = "Jay";
      return tutneseTranslation;
    case 'K':
      tutneseTranslation = "Kuck";
      return tutneseTranslation;
    case 'L':
      tutneseTranslation = "Lul";
      return tutneseTranslation;
    case 'M':
      tutneseTranslation = "Mum";
      return tutneseTranslation;
    case 'N':
      tutneseTranslation = "Nun";
      return tutneseTranslation;
    case 'O':
      tutneseTranslation = "O";
      return tutneseTranslation;
    case 'P':
      tutneseTranslation = "Pub";
      return tutneseTranslation;
    case 'Q':
      tutneseTranslation = "Quack";
      return tutneseTranslation;
    case 'R':
      tutneseTranslation = "Rug";
      return tutneseTranslation;
    case 'S':
      tutneseTranslation = "Sus";
      return tutneseTranslation;
    case 'T':
      tutneseTranslation = "Tut";
      return tutneseTranslation;
    case 'U':
      tutneseTranslation = "U";
      return tutneseTranslation;
    case 'V':
      tutneseTranslation = "Vuv";
      return tutneseTranslation;
    case 'W':
      tutneseTranslation = "Wack";
      return tutneseTranslation;
    case 'X':
      tutneseTranslation = "Ex";
      return tutneseTranslation;
    case 'Y':
      tutneseTranslation = "Yub";
      return tutneseTranslation;
    case 'Z':
      tutneseTranslation = "Zub";
      return tutneseTranslation;
    default:
      tutneseTranslation = singleCharacter;
      return tutneseTranslation;

  }
}

/*
This method takes a single char as a parameter and translates it into its
respective Tutnese translation specifically for double characters
Uses switch statement to identify and translate the character and returns it
as a string
*/
string Model::translateDoubleCharacter(char doubleCharacter){

  string tutneseTranslation;

  switch(doubleCharacter){

    case 'a':
      tutneseTranslation = "sqauta";
      return tutneseTranslation;
    case 'e':
      tutneseTranslation = "sqaute";
      return tutneseTranslation;
    case 'i':
      tutneseTranslation = "sqauti";
      return tutneseTranslation;
    case 'o':
      tutneseTranslation = "sqauto";
      return tutneseTranslation;
    case 'u':
      tutneseTranslation = "sqautu";
      return tutneseTranslation;
    case 'A':
      tutneseTranslation = "Sqauta";
      return tutneseTranslation;
    case 'E':
      tutneseTranslation = "Sqaute";
      return tutneseTranslation;
    case 'I':
      tutneseTranslation = "Sqauti";
      return tutneseTranslation;
    case 'O':
      tutneseTranslation = "Sqauto";
      return tutneseTranslation;
    case 'U':
      tutneseTranslation = "Sqautu";
      return tutneseTranslation;
    default:
      string squa = "squa";
      tutneseTranslation = squa + translateSingleCharacter(doubleCharacter);
      return tutneseTranslation;

  }
}
