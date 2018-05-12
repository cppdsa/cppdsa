#include <bits/stdc++.h>
using namespace std;

void seive(int n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = false;
    isPrime[1] = false;
    for (int i = 2; i <= n; ++i) {
        if (isPrime[i]) {
            cout << i << " ";
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = false;
        }
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    seive(n);
    return 0;
}