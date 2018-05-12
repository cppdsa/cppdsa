#include <bits/stdc++.h>
using namespace std;

void quickSort(vector<int> &A, int start, int end) {
	if (start >= end) return;
	int pivot = A[end];
	int i = start, j = end - 1;
	while (i < j) {
		while (i < j && A[i] <= pivot) i++;
		while (i < j && A[j] > pivot) j--;
		swap(A[i], A[j]);
	}
	if (A[i] > pivot)
		swap(A[i], A[end]);
	quickSort(A, start, i);
	quickSort(A, i + 1, end);
}

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	vector<int> A(n);
	for (int i = 0; i < n; ++i) {
		cin >> A[i];
	}
	quickSort(A, 0, n - 1);
	for (int i = 0; i < n; ++i) {
		cout << A[i] << " ";
	}
	cout << endl;
	return 0;
}