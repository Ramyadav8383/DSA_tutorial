// check given number is prime of not
#include<iostream>
using namespace std;

 int main() {
   int n;
   cin >> n;
   int i;
   for (i = 2; i < n; i++) {
    if (n%i ==0) {
      cout << "non prime" << endl;
      break;
    }
   }
   if(i==n) {
 cout << "prime number" << endl;
   }
   return 0;
 }
