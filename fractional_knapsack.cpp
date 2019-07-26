#include<bits/stdc++.h>
#include<algorithm>
#define ull unsigned long long
//#define MAX 1000
using namespace std;

struct item
{
    ull value;
    ull weight;
};

bool cmp(struct item a, struct item b)
{
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2;
}

double fractionalKnapsack(ull W,struct item a[],ull n)
{
    sort(a, a + n, cmp);
    ull currweight=0;
    double finalvalue=0.0;
    for(ull i=0;i<n;i++)
    {
        if(currweight+a[i].weight<=W)
        {
            currweight+=a[i].weight;
            finalvalue+=a[i].value;
        }
        else
        {
            ull remain=W-currweight;
            finalvalue+=a[i].value*((double)remain/a[i].weight);
            break;
        }
    }
    return finalvalue;
}

int main()
{
    ull n,W,i;
    cin>>n>>W;
    struct item a[n];
    double r;
    for(i=0;i<n;i++)
    {
        cin>>a[i].value;
        cin>>a[i].weight;
    }
    r=fractionalKnapsack(W,a,n);
    printf("%.4f\n",r);
    return 0;
}
