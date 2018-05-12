#include <bits/stdc++.h>
using namespace std;

void mergeSort(vector<int> &A, int start, int end) {
    /** mergeSort logic **/
    if (start >= end) return;
    int mid = (start + end) / 2;
    mergeSort(A, start, mid);
    mergeSort(A, mid + 1, end);

    /** merge logic **/
    vector<int> aux(end - start + 1);
    int i = start, j = mid + 1;
    int k = 0;
    while (i <= mid && j <= end)
        if (A[i] <= A[j])
            aux[k++] = A[i++];
        else
            aux[k++] = A[j++];

    while (i <= mid) aux[k++] = A[i++];
    while (j <= end) aux[k++] = A[j++];

    for (int l = 0; l < k; ++l)
        A[start + l] = aux[l];

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
    mergeSort(A, 0, n - 1);
    for (int i = 0; i < n; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}