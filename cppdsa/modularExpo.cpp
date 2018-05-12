#include <bits/stdc++.h>
using namespace std;

/** Note: if (base * base) overflows `int` range, then use long or long long **/
int modularExpoIterative(int base, int expo, int mod) {
    int ans = 1;
    while (expo) {
        if (expo & 1)
            ans = (ans * base) % mod;
        base = (base * base) % mod;
        expo >>= 1;
    }
    return ans % mod;
}

int modularExpoRecursive(int base, int expo, int mod) {
    if (expo == 0) return 1;
    if (expo == 1) return base;
    int temp = modularExpoRecursive(base, expo / 2, mod);
    int ans = (temp * temp) % mod;
    if (expo % 2) ans = (ans * base) % mod;
    return ans;
}

int main(int argc, char const *argv[])
{
    int base, expo, mod;
    cin >> base >> expo >> mod;
    cout << modularExpoIterative(base, expo, mod) << endl;    
    return 0;
}
