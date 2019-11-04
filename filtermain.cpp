#include<iostream>
#include<string>
#include "filter.h"
using namespace std;
int main(){
const int num_filters = 7;
Filter* filters[num_filters];

filters[0] = new Capitalize();
filters[1] = new CapitalizeFirstLetter();
filters[2] = new CapitalizeFirstLetterOfEveryWord();
filters[3] = new Obenglobish();
filters[4] = new ReverseString();
filters[5] = new ToSmall();
filters[6] = new Randomize();

string input;
cout << "Enter string: ";  getline(cin, input);

cout << "Input string: " << input << endl;
for (int i=0; i<num_filters; ++i) {
  cout << "Filter name:  " << filters[i]->get_name() << endl;
  cout << "Output:       " << filters[i]->apply(input) << endl;
}

for (int i=0; i<num_filters; ++i) delete filters[i];
}
