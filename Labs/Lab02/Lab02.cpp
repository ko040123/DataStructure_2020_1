/*
On my honor, I pledge that I have neither received nor provided improper assistance in my completion on this assignment.
Signed: Kim Woo Bin   Student Number: 21600124
*/
#include <iostream>
using namespace std;

int& max(int a[], int n){
  int x = 0;
  for(int i = 0; i < n; i++)
    if(a[i] > a[x]) x = i;
  return a[x];
}

int main(){
  int a[] = {12, 42, 33, 99, 63};
  int n = sizeof(a) / sizeof(a[0]);

  cout << "max = " << max(a,n) << endl;

  for(int i = 0; i < n; i++)
    cout << a[i] << " ";
}
