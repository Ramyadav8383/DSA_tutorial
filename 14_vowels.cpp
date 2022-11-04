#include<iostream>
using namespace std;

int main() {

  char c;
  cout << "Enter your alphabet" << endl;
  cin >> c;

  switch (c)
  {
  case 'a':
    cout << "it is a vowel"<<"  " << c << endl;
    break;
  case 'e':
    cout << "it is a vowel"<<"  " << c << endl;
    break;
  case 'i':
    cout << "it is a vowel"<<"  " << c << endl;
    break;
  case 'o':
    cout << "it is a vowel"<<"  " << c << endl;
    break;
  case 'u':
    cout << "it is a vowel"<<"  " << c << endl;
    break;
  
  default:
    cout << "it is a consonant" << endl;
    break;
  }
  return 0;

}