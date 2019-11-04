#ifndef __filter__
#define __filter__

#include <iostream>
#include <string>

using namespace std;
class Filter
{
protected:
 string _name;

public:
 Filter(const string& name) : _name(name) {}
 virtual ~Filter() ;

 virtual string apply(const string& input);

 string get_name() { return _name; }
};
class Capitalize:public Filter
{
protected:
string sentence;
public:
Capitalize();
~Capitalize();
string apply(const string& input);
};
class CapitalizeFirstLetter:public Filter
{
protected:
string sentence;
public:
CapitalizeFirstLetter();
~CapitalizeFirstLetter();
string apply(const string& input);
};
class CapitalizeFirstLetterOfEveryWord:public Filter
{
protected:
string sentence;
public:
CapitalizeFirstLetterOfEveryWord();
~CapitalizeFirstLetterOfEveryWord();
string apply(const string& input);
};
class Obenglobish:public Filter
{
protected:
string sentence;
public:
Obenglobish();
~Obenglobish();
string apply(const string& input);
};
class ReverseString:public Filter
{
protected:
string sentence;
public:
ReverseString();
~ReverseString();
string apply(const string& input);
};
class ToSmall:public Filter
{
protected:
string sentence;
public:
ToSmall();
~ToSmall();
string apply(const string& input);
};
class Randomize:public Filter
{
protected:
string sentence;
public:
Randomize();
~Randomize();
string apply(const string& input);
};
#endif
