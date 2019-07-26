#include <iostream>
#include <bits/stdc++.h>
#define ull unsigned long long int
#include <algorithm>
using namespace std;
int main()
{
    ull n,i;
    cin >> n;
    ull a[n],res;
    for (i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a+n, greater<ull>());
    res=a[0]*a[1];
    cout<<res;
    return 0;
}
