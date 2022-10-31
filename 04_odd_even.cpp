#include<iostream>
using namespace std;

int main() {

  int n;
  cout << "enter the number" << endl;
  cin >> n;

  if(n % 2 == 0) {
    cout << "it's a even Number" << endl;
  }
  else {
    cout << "it's a odd number" << endl;
  }
  return 0;
}