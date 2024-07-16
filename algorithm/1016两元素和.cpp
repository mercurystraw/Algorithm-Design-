/*#include<iostream>
using namespace std;
const int N = 50001;
int a[N];
int n, x;
bool found;
void quicksort(int q[], int l, int r) {
	if (l >= r)return;
	int i = l - 1, j = r + 1, x = q[(l + r) >> 1];
	while (i < j) {
		do i++; while (q[i] < x);
		do j--; while (q[j] > x);
		if (i < j)swap(q[i], q[j]);
	}
	quicksort(q, l, j); quicksort(q, j + 1, r);
}
void binarysearch(int q[],int low, int high, int x) {
	while (low <= high) {
		int mid = (low + high) / 2;
		if (q[mid] == x) {
			found = true;
			return;
		}
		else if (q[mid] < x) {
			low = mid + 1;
		}
		else if (q[mid] > x) {
			high = mid - 1;
		}
	}
}
							//排序+二分搜索 时间复杂度O(nlogn)
int main() {
	int m; cin >> m;
	for (int k = 0; k < m; k++) {
		found = false;
		cin >> n >> x;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		quicksort(a, 0, n - 1);
		for (int i = 0; i < n&&!found; i++) {
			binarysearch(a, 0, n - 1, x - a[i]);
		}
		if (found == true)cout << "yes" << endl;
		else cout << "no" << endl;
	}
	return 0;
}*/
/*int main() {
	int m; cin >> m;
	for (int k = 0; k < m; k++) {
		cin >> n >> x;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		bool found = false;
		for (int i = 0; i < n&&!found; i++) {
			for (int j = i + 1; j < n; j++) {
				if (a[i] + a[j] == x) {
					cout << "yes" << endl;
					found = true;
					break;
				}
			}
		}
		if (!found)cout << "no" << endl;
	}
	return 0;
}*/ //暴力做法 O(n^2)
