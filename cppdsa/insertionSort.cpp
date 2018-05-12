#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &A) {
    int l = A.size();
    for (int i = l - 1; i >= 0; --i) {
        int pos = i, temp = A[i];
        while (pos + 1 < l && A[pos] > A[pos + 1]) swap(A[pos], A[pos++]);
        A[pos] = temp;
    }
    return;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }
    insertionSort(A);
    for (int i = 0; i < n; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}