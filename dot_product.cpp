#include<bits/stdc++.h>
#include<algorithm>
#define ll long long
using namespace std;
int main()
{
    ll n,i,sum=0;
    cin>>n;
    ll a[n],b[n];
    for(i=0;i<n;i++)
            cin>>a[i];
    for(i=0;i<n;i++)
            cin>>b[i];
    sort(a,a+n,greater<int>());
    sort(b,b+n,greater<int>());
    for(i=0;i<n;i++)
    {
        sum=sum+(a[i]*b[i]);
    }
    cout<<sum<<endl;
    return 0;
}
