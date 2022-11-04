#include<iostream>
using namespace std;

int main(){

  double n1, n2;
  cout << "enter your number" << endl;
  cin >> n1 >> n2;

  char op;
  cout << "enter your operator" << endl;
  cin >> op;

  switch (op)
  {
  case '+':
   cout << n1 + n2 << endl;
      break;
  case '-':
   cout << n1 - n2 << endl;
      break;
  case '*':
   cout << n1 * n2 << endl;
      break;
  case '/':
   cout << n1 / n2 << endl;
      break;

      default:
        cout << "Enter another operator" << endl;
        break;
  }
  return 0;
}