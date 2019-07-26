#include <algorithm>
#include <iostream>
#include<bits/stdc++.h>
#define ull unsigned long long
using namespace std;

struct arrays
{
    ull first;
    ull last;
};

bool compare(arrays a,arrays b)
{
    return a.last<b.last;
}

int main()
{
  ull n,i;
  cin>>n;
  ull p[n]={0},j=0,t;
  arrays a[n];
  for(i=0;i<n;i++)
  {
      cin>>a[i].first;
      cin>>a[i].last;
  }
  sort(a,a+n,compare);
  /*for(i=0;i<n;i++)
  {
      cout<<a[i].first<<" "<<a[i].last<<endl;
  }*/
  t=a[0].last;
  p[j]=t;
  j++;
  for(i=1;i<n;i++)
  {
      if(t>=a[i].first && t<=a[i].last)
        {

        }
      else
      {
          t=a[i].last;
          p[j]=t;
          j++;
      }
  }
  cout<<j<<endl;
  for(j=0;p[j]!=0;j++)
    cout<<p[j]<<" ";
  return 0;
}
