// find maximum number
#include<iostream>
using namespace std;

int main() {

  int a, b, c;
  cin >> a >> b >> c;

  if (a>b) {
    if (a>c) {
      cout << a << endl;
    }
    else {
      cout << c << endl;
    } 
  }
  else {
    if(b>c) {
      cout << b << endl;
    }
    else {
      cout << c << endl;
    }

  }

  return 0;
}
























// #include<iostream>
// using namespace std;

// int main() {

//   int a, b, c;
//   cin >> a >> b >> c;

// if (a >b) {
//   cout << "a is greater" << endl;

// }
// else if (b>c) {
//   cout << "b is greater" << endl;

// }
// else {
//   cout << "c is greater" << endl;
// }
  
//   return 0;
// }