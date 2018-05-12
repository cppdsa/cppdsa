#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>&A, int key) {
    int l = A.size();
    int low = 0, up = l - 1;
    if (key < A[low] || key > A[up]) return -1;
    while (low <= up) {
        int mid = (low + up) / 2;
        if (A[mid] < key) {
            low = mid + 1;
        } else if (A[mid] > key) {
            up = mid - 1;
        } else {
            return mid;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int n, key;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }
    cin >> key;
    int idx = binarySearch(A, key);
    cout << idx << endl;
    return 0;
}