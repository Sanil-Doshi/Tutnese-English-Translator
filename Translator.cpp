#include "Translator.h"
#include "Model.h"

#include <sstream>


Translator::Translator(){}

Translator::~Translator(){}

/*
Takes a single string as a parameter and returns the translated Tutnese word
Implements the Model class to do so
*/
string Translator::translateEnglishWord(string singleString){

  Model model;
  string tutneseWord;

  /*
  Uses for loop to iterate through each character in the word
  Calls the methods from the model class to translate
  Uses if statement to identify if it needs to use 'doubleCharacter' translation
  Or 'singleCharacter' translation
  Adds each character to the string 'tutneseWord' and returns that string
  */
  for (int i = 0; i < singleString.size(); i++){

    if (singleString[i] == singleString[i+1]){
      i++;
      tutneseWord += model.translateDoubleCharacter(singleString[i]);

    } else {
      tutneseWord += model.translateSingleCharacter(singleString[i]);

    }
  }
  return tutneseWord;
}

/*
Takes a sentence as a parameter and returns the translated Tutnese sentence
Implements the 'translateEnglishWord' method
*/
string Translator::translateEnglishSentence(string singleSentence){

  stringstream sentence(singleSentence);
  string tutneseSentence;
  string word;

  /*
  Uses a while loop to pass each word from the sentence into the method
  The word then gets translated and stored in the string 'tutneseSentence'
  The sentence is returned
  Implements the sstream header file to read the string as if it were a stream
  */
  while(sentence >> word){
    tutneseSentence += translateEnglishWord(word) + " ";

  }

  return tutneseSentence;
}

string Translator::translateTutneseWord(string tutneseString){

  //declares string variable to make it easier to find and replace tutnese word
  //uses these variables to translate
  string bub = "bub";
  string cash = "cash";
  string dud = "dud";
  string fuf = "fuf";
  string gug = "gug";
  string hash = "hash";
  string jay = "jay";
  string kuck = "kuck";
  string lul = "lul";
  string mum = "mum";
  string nun = "nun";
  string pub = "pub";
  string quack = "quack";
  string rug = "rug";
  string sus = "sus";
  string tut = "tut";
  string vuv = "vuv";
  string wack = "wack";
  string ex = "ex";
  string yub = "yub";
  string zub = "zub";
  string squata = "squata";
  string squate = "squate";
  string squati = "squati";
  string squato = "squato";
  string squatu = "squatu";
  string squabub = "squabub";
  string squacash = "squacash";
  string squadud = "squadud";
  string squafuf = "squafuf";
  string squagug = "squagug";
  string squahash = "squahash";
  string squajay = "squajay";
  string squakuck = "squakuck";
  string squalul = "squalul";
  string squamum = "squamum";
  string squanun = "squanun";
  string squapub = "squapub";
  string squaquack = "squaquack";
  string squarug = "squarug";
  string squasus = "squasus";
  string squatut = "squatut";
  string squavuv = "squavuv";
  string squawack = "squawack";
  string squaex = "squaex";
  string squayub = "squayub";
  string squazub = "squazub";

  //Capitalized versions

  string Bub = "Bub";
  string Cash = "Cash";
  string Dud = "Dud";
  string Fuf = "Fuf";
  string Gug = "Gug";
  string Hash = "Hash";
  string Jay = "Jay";
  string Kuck = "Kuck";
  string Lul = "Lul";
  string Mum = "Mum";
  string Nun = "Nun";
  string Pub = "Pub";
  string Quack = "Quack";
  string Rug = "Rug";
  string Sus = "Sus";
  string Tut = "Tut";
  string Vuv = "Vuv";
  string Wack = "Wack";
  string Ex = "Ex";
  string Yub = "Yub";
  string Zub = "Zub";
  string Squata = "Squata";
  string Squate = "Squate";
  string Squati = "Squati";
  string Squato = "Squato";
  string Squatu = "Squatu";

  string tutword = tutneseString;

  //uses for loop to that iterates through the length of the string
  for (int i = 0; i < tutword.length(); i++){

    //utilizes find and replace methods to translate from tutnese to english
    if (tutword.find(squata) != string::npos){

      tutword.replace(tutword.find(squata),squata.length(),"aa");
    }
    if (tutword.find(squate) != string::npos){

      tutword.replace(tutword.find(squate),squate.length(),"ee");
    }
    if (tutword.find(squati) != string::npos){

      tutword.replace(tutword.find(squati),squati.length(),"ii");
    }
    if (tutword.find(squato) != string::npos){

      tutword.replace(tutword.find(squato),squato.length(),"oo");
    }
    if (tutword.find(squatu) != string::npos){

      tutword.replace(tutword.find(squatu),squatu.length(),"uu");
    }
    if (tutword.find(squabub) != string::npos){

      tutword.replace(tutword.find(squabub),squabub.length(),"bb");
    }
    if (tutword.find(squacash) != string::npos){

      tutword.replace(tutword.find(squacash),squacash.length(),"cc");
    }
    if (tutword.find(squadud) != string::npos){

      tutword.replace(tutword.find(squadud),squadud.length(),"dd");
    }
    if (tutword.find(squafuf) != string::npos){

      tutword.replace(tutword.find(squafuf),squafuf.length(),"ff");
    }
    if (tutword.find(squagug) != string::npos){

      tutword.replace(tutword.find(squagug),squagug.length(),"gg");
    }
    if (tutword.find(squahash) != string::npos){

      tutword.replace(tutword.find(squahash),squahash.length(),"hh");
    }
    if (tutword.find(squajay) != string::npos){

      tutword.replace(tutword.find(squajay),squajay.length(),"jj");
    }
    if (tutword.find(squakuck) != string::npos){

      tutword.replace(tutword.find(squakuck),squakuck.length(),"kk");
    }
    if (tutword.find(squalul) != string::npos){

      tutword.replace(tutword.find(squalul),squalul.length(),"ll");
    }
    if (tutword.find(squamum) != string::npos){

      tutword.replace(tutword.find(squamum),squamum.length(),"mm");
    }
    if (tutword.find(squanun) != string::npos){

      tutword.replace(tutword.find(squanun),squanun.length(),"nn");
    }
    if (tutword.find(squapub) != string::npos){

      tutword.replace(tutword.find(squapub),squapub.length(),"pp");
    }
    if (tutword.find(squaquack) != string::npos){

      tutword.replace(tutword.find(squaquack),squaquack.length(),"qq");
    }
    if (tutword.find(squarug) != string::npos){

      tutword.replace(tutword.find(squarug),squarug.length(),"rr");
    }
    if (tutword.find(squasus) != string::npos){

      tutword.replace(tutword.find(squasus),squasus.length(),"ss");
    }
    if (tutword.find(squatut) != string::npos){

      tutword.replace(tutword.find(squatut),squatut.length(),"tt");
    }
    if (tutword.find(squavuv) != string::npos){

      tutword.replace(tutword.find(squavuv),squavuv.length(),"vv");
    }
    if (tutword.find(squawack) != string::npos){

      tutword.replace(tutword.find(squawack),squawack.length(),"ww");
    }
    if (tutword.find(squaex) != string::npos){

      tutword.replace(tutword.find(squaex),squaex.length(),"xx");
    }
    if (tutword.find(squayub) != string::npos){

      tutword.replace(tutword.find(squayub),squayub.length(),"yy");
    }
    if (tutword.find(squazub) != string::npos){

      tutword.replace(tutword.find(squazub),squazub.length(),"zz");
    }
    if (tutword.find(bub) != string::npos){

      tutword.replace(tutword.find(bub),bub.length(),"b");
    }
    if (tutword.find(cash) != string::npos){

      tutword.replace(tutword.find(cash),cash.length(),"c");
    }
    if (tutword.find(dud) != string::npos){

      tutword.replace(tutword.find(dud),dud.length(),"d");
    }
    if (tutword.find(fuf) != string::npos){

      tutword.replace(tutword.find(fuf),fuf.length(),"f");
    }
    if (tutword.find(gug) != string::npos){

      tutword.replace(tutword.find(gug),gug.length(),"g");
    }
    if (tutword.find(hash) != string::npos){

      tutword.replace(tutword.find(hash),hash.length(),"h");
    }
    if (tutword.find(jay) != string::npos){

      tutword.replace(tutword.find(jay),jay.length(),"j");
    }
    if (tutword.find(kuck) != string::npos){

      tutword.replace(tutword.find(kuck),kuck.length(),"k");
    }
    if (tutword.find(lul) != string::npos){

      tutword.replace(tutword.find(lul),lul.length(),"l");
    }
    if (tutword.find(mum) != string::npos){

      tutword.replace(tutword.find(mum),mum.length(),"m");
    }
    if (tutword.find(nun) != string::npos){

      tutword.replace(tutword.find(nun),nun.length(),"n");
    }
    if (tutword.find(pub) != string::npos){

      tutword.replace(tutword.find(pub),pub.length(),"p");
    }
    if (tutword.find(quack) != string::npos){

      tutword.replace(tutword.find(quack),quack.length(),"q");
    }
    if (tutword.find(rug) != string::npos){

      tutword.replace(tutword.find(rug),rug.length(),"r");
    }
    if (tutword.find(sus) != string::npos){

      tutword.replace(tutword.find(sus),sus.length(),"s");
    }
    if (tutword.find(tut) != string::npos){

      tutword.replace(tutword.find(tut),tut.length(),"t");
    }
    if (tutword.find(vuv) != string::npos){

      tutword.replace(tutword.find(vuv),vuv.length(),"v");
    }
    if (tutword.find(wack) != string::npos){

      tutword.replace(tutword.find(wack),wack.length(),"w");
    }
    if (tutword.find(ex) != string::npos){

      tutword.replace(tutword.find(ex),ex.length(),"x");
    }
    if (tutword.find(yub) != string::npos){

      tutword.replace(tutword.find(yub),yub.length(),"y");
    }
    if (tutword.find(zub) != string::npos){

      tutword.replace(tutword.find(zub),zub.length(),"z");
    }
    if (tutword.find(Bub) != string::npos){

      tutword.replace(tutword.find(Bub),bub.length(),"B");
    }
    if (tutword.find(Cash) != string::npos){

      tutword.replace(tutword.find(Cash),cash.length(),"C");
    }
    if (tutword.find(Dud) != string::npos){

      tutword.replace(tutword.find(Dud),dud.length(),"D");
    }
    if (tutword.find(Fuf) != string::npos){

      tutword.replace(tutword.find(Fuf),fuf.length(),"F");
    }
    if (tutword.find(Gug) != string::npos){

      tutword.replace(tutword.find(Gug),gug.length(),"G");
    }
    if (tutword.find(Hash) != string::npos){

      tutword.replace(tutword.find(Hash),hash.length(),"H");
    }
    if (tutword.find(Jay) != string::npos){

      tutword.replace(tutword.find(Jay),jay.length(),"J");
    }
    if (tutword.find(Kuck) != string::npos){

      tutword.replace(tutword.find(Kuck),kuck.length(),"K");
    }
    if (tutword.find(Lul) != string::npos){

      tutword.replace(tutword.find(Lul),lul.length(),"L");
    }
    if (tutword.find(Mum) != string::npos){

      tutword.replace(tutword.find(Mum),mum.length(),"M");
    }
    if (tutword.find(Nun) != string::npos){

      tutword.replace(tutword.find(Nun),nun.length(),"N");
    }
    if (tutword.find(Pub) != string::npos){

      tutword.replace(tutword.find(Pub),pub.length(),"P");
    }
    if (tutword.find(Quack) != string::npos){

      tutword.replace(tutword.find(Quack),quack.length(),"Q");
    }
    if (tutword.find(Rug) != string::npos){

      tutword.replace(tutword.find(Rug),rug.length(),"R");
    }
    if (tutword.find(Sus) != string::npos){

      tutword.replace(tutword.find(Sus),sus.length(),"S");
    }
    if (tutword.find(Tut) != string::npos){

      tutword.replace(tutword.find(Tut),tut.length(),"T");
    }
    if (tutword.find(Vuv) != string::npos){

      tutword.replace(tutword.find(Vuv),vuv.length(),"V");
    }
    if (tutword.find(Wack) != string::npos){

      tutword.replace(tutword.find(Wack),wack.length(),"W");
    }
    if (tutword.find(Ex) != string::npos){

      tutword.replace(tutword.find(Ex),ex.length(),"X");
    }
    if (tutword.find(Yub) != string::npos){

      tutword.replace(tutword.find(Yub),yub.length(),"Y");
    }
    if (tutword.find(Zub) != string::npos){

      tutword.replace(tutword.find(Zub),zub.length(),"Z");
    }

  }

  return tutword;

}

string Translator::translateTutneseSentence(string tutneseSentence){

  //uses translateTutneseWord methods to translate a whole tutnese sentence
  stringstream tutsentence(tutneseSentence);
  string englishSentence;
  string tutword;

  while(tutsentence >> tutword){
    englishSentence += translateTutneseWord(tutword) + " ";

  }

  return englishSentence;

}
