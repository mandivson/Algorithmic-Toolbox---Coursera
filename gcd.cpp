#include <iostream>
#include<bits/stdc++.h>
#define ull unsigned long long int
using namespace std;
int main()
{
  ull a[2],i,rem;
  for(i=0;i<2;i++)
        cin>>a[i];
  sort(a,a+2);
  //rem=a[1]%a[0];
  while(a[0]!=0)
  {
    rem=a[1]%a[0];
    a[1]=a[0];
    a[0]=rem;
  }
  cout<<a[1]<<endl;
  return 0;
}

/*int gcd_naive(int a, int b) {
  int current_gcd = 1;
  for (int d = 2; d <= a && d <= b; d++) {
    if (a % d == 0 && b % d == 0) {
      if (d > current_gcd) {
        current_gcd = d;
      }
    }
  }
  return current_gcd;
}*/

