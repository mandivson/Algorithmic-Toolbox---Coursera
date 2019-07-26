#include <iostream>
#define ull unsigned long long int
using namespace std;
ull get_pisano_period(ull m) {
    ull a = 0, b = 1, c = a + b;
    for (ull i = 0; i < m * m; i++) {
        c = (a + b) % m;
        a = b;
        b = c;
        if (a == 0 && b == 1)
            return i + 1;
    }
}

ull get_fibonacci_huge_naive(ull n, ull m) {
    ull remainder = n % get_pisano_period(m);

    ull first = 0;
    ull second = 1;

    ull res = remainder;

    for (ull i = 1; i < remainder; i++) {
        res = (first + second) % m;
        first = second;
        second = res;
    }
    return res % m;
}

int main() {
    ull n, m;
    cin >> n >> m;
    cout << get_fibonacci_huge_naive(n, m) << '\n';
}
