#include<iostream>
using namespace std;

int main() {

  char button;
  cout << "Enter a character" << endl;
  cin >> button;

  // if (button =='a')
  // {
  //   cout << "hello" << endl;
  // }
  // else if( button =='b') {
  //   cout << "hola" << endl;
  // }
  // else if( button =='c') {
  //   cout << "Nihao" << endl;
  // }
  // else if( button =='d') {
  //   cout << "Konichiva" << endl;
  // }
  // else if( button =='e') {
  //   cout << "gomain" << endl;
  // }
  // else {
  //   cout << " I am still learning more "<< endl;
  // }

  switch (button)
  {
  case 'a':
  cout<<"hello"<<endl;
  break;
  case 'b':
  cout<<"Namaste"<<endl;
  break;
  case 'c':
  cout<<"hola"<<endl;
  break;
  case 'd':
  cout<<"nihao"<<endl;
  break;
  case 'e':
  cout<<"gomian"<<endl;
    break;
  
  default:
    cout << "I am Still learning more!" << endl;
    break;
  }
  return 0;
}