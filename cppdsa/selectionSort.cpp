#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &A) {
    int l = A.size();
    for (int i = 0; i < l - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < l; j++) {
            if (A[j] < A[min_idx]) min_idx = j;
        }
        swap(A[i], A[min_idx]);
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
    selectionSort(A);
    for (int i = 0; i < n; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}