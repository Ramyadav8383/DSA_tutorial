#include<iostream>
using namespace std;

int main() {
  int savings;
  cout << "Enter your ammount" << endl;
  cin >> savings;
// normal if else condition
  if (savings > 5000) {
    // nested if else 
    if(savings >10000) {
      cout << "Roadtrip with Neha" << endl;

    }
    else {
      cout << "shooping with Neha" << endl;
    }

  }
  else if (savings>2000) {
    cout << "Rashmi" << endl;
  }
  else {
    cout << "Friends with samosa" << endl;
  }

  return 0;
}