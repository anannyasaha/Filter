#include "filter.h"
#include <cstdlib>
#include <vector>
Filter::~Filter(){}
string Filter::apply(const string& input){

  return _name;
}
Capitalize::Capitalize():Filter(_name){
  _name="Capitalize";
sentence="";}
Capitalize::~Capitalize(){}
CapitalizeFirstLetter::CapitalizeFirstLetter():Filter(_name){
  _name="CapitalizeFirstLetter";
sentence="";}
CapitalizeFirstLetter::~CapitalizeFirstLetter(){}
CapitalizeFirstLetterOfEveryWord::CapitalizeFirstLetterOfEveryWord():Filter(_name){
  _name="CapitalizeFirstLetterOfEveryWord";
sentence="";
}
CapitalizeFirstLetterOfEveryWord::~CapitalizeFirstLetterOfEveryWord(){}
Obenglobish::Obenglobish():Filter(_name){
  _name="Obenglobish";
  sentence="";}
  Obenglobish::~Obenglobish(){}
ReverseString::ReverseString():Filter(_name){
  _name="ReverseString";
  sentence="";}
  ReverseString::~ReverseString(){}
ToSmall::ToSmall():Filter(_name){
  _name="ToSmall";
sentence="";
}
ToSmall::~ToSmall(){}
Randomize::Randomize():Filter(_name){
  _name="Randomize";
sentence="";
}
Randomize::~Randomize(){}
string Capitalize::apply(const string& input){
  sentence=input;
  for(int i=0;i<input.length();i++){
    if(input[i]>=97)
    {sentence[i]=input[i]-32;}
    else
    sentence[i]=input[i];
  }
  return sentence;
}
string CapitalizeFirstLetter::apply(const string& input){
  sentence=input;
  if(input[0]>=97)
  {sentence[0]=input[0]-32;}
  else
  sentence[0]=input[0];
  return sentence;
}
string CapitalizeFirstLetterOfEveryWord::apply(const string& input){
  sentence=input;
  if(input[0]>=97)
  {sentence[0]=input[0]-32;}
  else
  sentence[0]=input[0];
  for(int i=1;i<input.length();i++)
    {//sentence[i]=input[i];
    if((input[i]==' ')&&((input[i+1]<=48)||(input[i+1]>=57)))
       {sentence[i]=input[i];
        sentence[i+1]=input[i+1]-32;
        i++;
        continue;}
    if((input[i]>=48)&&(input[i]<=57)){
        sentence[i]=input[i];
        }
    }

  return sentence;
}
string Obenglobish::apply(const string& input){
  string sentence;
//  char char1;
//  int num1;
  for(int i=0; i < input.length(); i++){
    //char1 = input[i];
  //  num1 = (int)char1;
    if(input[i] == 65 || input[i] == 69 || input[i] == 73
       || input[i] == 79 || input[i] == 85 || input[i] == 97 ||
       input[i] == 101 || input[i] == 105 || input[i] == 111 || input[i]==117){
         sentence = sentence + "ob" + input[i];
       }else{
         sentence = sentence + input[i];
       }
  }
  return sentence;
}

string ReverseString::apply(const string& input){
  sentence=input;
  for(int i=0;i<input.length();i++){
    //cout<<input[i]<<endl;
    sentence[i]=input[input.length()-1-i];
    //cout<<sentence[i]<<endl;
  }
  return sentence;
}
string ToSmall::apply(const string& input){
sentence=input;
  for(int i=0;i<input.length();i++){
    if((input[i]>=65)&&(input[i]<91))
    {sentence[i]=input[i]+32;}
    else
    sentence[i]=input[i];
  }
  return sentence;
}
string Randomize::apply(const string& input){
  sentence=input;

  for(int i=0;i<input.length();i++){
    sentence[i]='*';
    if(input[i]==' '){
      sentence[i]=' ';
    }
  }
for(int j=0;j<input.length();j++)
      { int k=rand()%input.length();
       if(input[j]==' '){
          j++;
        }
       while(sentence[k]=='*'&&sentence[k]!=' '&&input[j]!=' '){
         sentence[k]=input[j];
         j++;
         k=rand()%input.length();
       }
       j--;
     }
  return sentence;
}
