/*#include<iostream>
using namespace std;
const int N = 20001 ;
int n;
int a[N];

void binarysearch(int low,int high,int x) {
	int father = -1;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (a[mid] == x) {
			cout << "success, " << "father is " << father << endl;
			return;
		}
		else if (a[mid] < x) {
			father = a[mid];
			low = mid + 1;
		}
		else if (a[mid] > x) {
			father = a[mid];
			high = mid - 1;
		}
	}
	cout << "not found, " << "father is " << father << endl;
}

int main() {
	int m; cin >> m;
	for (int i = 0; i < m; i++) {
		int x;
		cin >> n >> x;
		for (int j = 0; j < n; j++)
			cin >> a[j];
		binarysearch(0, n - 1, x);
	}
	return 0;
}*/