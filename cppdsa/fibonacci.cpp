#include <bits/stdc++.h>
using namespace std;

int nthFibo(int n) {
    // Fibonacci series taken as mentioned here: https://oeis.org/A000045
    if (n <= 1) return n;
    int a = 0, b = 1;
    for (int i = 0; i < n - 1; ++i) {
        int c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << nthFibo(n) << endl;
    return 0;
}