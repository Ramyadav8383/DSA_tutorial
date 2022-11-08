#include<iostream>
using namespace std;

int main() {
  int i = 1, j = 2, k = 3;
// 1 //2 //3
  int m = i-- - j-- - k--;
  cout << i; 
  cout << j; 
  cout << k;
  cout << m << endl;
  // 0 //1 //2
  return 0;
}