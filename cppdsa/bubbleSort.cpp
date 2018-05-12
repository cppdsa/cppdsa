#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &A) {
    int l = A.size();
    for (int k = l - 1; k > 0; --k) {
        for (int i = 0; i < k; ++i) {
            if (A[i] > A[i + 1]) swap(A[i], A[i + 1]);
        }
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }
    bubbleSort(A);
    for (int i = 0; i < n; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}