#include <iostream>
#include<bits/stdc++.h>
#define ull unsigned long long int
using namespace std;
int main()
{
    ull n,i;
    cin>>n;
    ull f[n];
    f[0]=0;
    f[1]=1;
    for(i=2;i<=n;i++)
    {
        f[i]=(f[i-1]+f[i-2])%10;
    }
    cout<<f[n]<<endl;
    return 0;
}
/*int get_fibonacci_last_digit_naive(int n) {
    if (n <= 1)
        return n;

    int previous = 0;
    int current  = 1;

    for (int i = 0; i < n - 1; ++i) {
        int tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % 10;
}*/
