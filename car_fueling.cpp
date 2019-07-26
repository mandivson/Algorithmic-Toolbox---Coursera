#include<bits/stdc++.h>
#include<algorithm>
#define ull unsigned long long
using namespace std;
int main()
{
    ull d,m,n,i,last=0,t=0;
    cin>>d>>m>>n;
    n++;
    ull a[n];
    for(i=0;i<n-1;i++)
        cin>>a[i];
    a[n-1]=d;
    if(d<m)
        cout<<"0"<<endl;
    else
    {
        for(i=0;i<n-1;i++)
        {
            if(m>=a[i]-last && m>=a[i+1]-last)
            {
                t=t+0;
            }
            else
            {
                last=a[i];
                //cout<<last<<endl;
                if(i!=n-1 && a[i+1]-last>m)
                {
                    cout<<"-1"<<endl;
                    exit(0);
                }
                t++;
            }
        }
        cout<<t<<endl;
    }
    return 0;
}
