#include<iostream>
using namespace std;

int main() {

  char button;
  cout << "Enter the input" << endl;
  cin >> button;

  if (button ='A')
  {
    cout << "hello" << endl;
  }
  else if( button ='B') {
    cout << "hola" << endl;
  }
  else if( button ='C') {
    cout << "Nihao" << endl;
  }
  else if( button ='D') {
    cout << "Konichiva" << endl;
  }
  else {
    cout << "gomain" << endl;
  }
  return 0;
}