// print all prime numbers between a and b
#include<iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int i;

  for (int num = a; num < b; num++) {
    for (i = 2; i < num; i++) {
      if(num%i==0) {
        // cout << "non prime" << endl;
        break;
      }
    }
    if(i==num) {
      cout << num << endl;
    }
  }
    return 0;
}

// complete 3.1 video break and continue