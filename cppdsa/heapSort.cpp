#include <bits/stdc++.h>
using namespace std;

inline int getParent(int child) {return (child - 1) / 2;}

void heapify(vector<int> &A) {
    // Heapify so as to produce min heap
    int l = A.size();
    for (int i = l - 1; i >= 0; --i) {
        int child = i, parent;
        while (child > 0 && A[(parent = getParent(child))] > A[child]) {
            swap(A[parent], A[child]);
            child = parent;
        }
    }
}

int popHeap(vector<int> &A) {
    int l = A.size();
    if (l == 0) return INT_MIN;
    int temp = A[0];

    A[0] = A[--l];
    A.pop_back();
    int parent = 0;
    while (2 * parent + 1 < l) {
        int child = 2 * parent + 1;
        if (child + 1 < l && A[child + 1] < A[child]) child++;
        if (A[parent] > A[child]) {
            swap(A[parent], A[child]);
            parent = child;
        } else break;
    }
    return temp;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }
    heapify(A);
    for (int i = 0; i < n; ++i) {
        int val = popHeap(A);
        cout << val << " ";
    }
    cout << endl;
    return 0;
}