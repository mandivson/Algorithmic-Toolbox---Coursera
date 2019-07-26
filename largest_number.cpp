#include <algorithm>
#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;
int main()
{
    ull n,i;
    cin>>n;
    ull a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n,greater<int>());
    for(i=0;i<n;i++)
        cout<<a[i];
    return 0;
}
