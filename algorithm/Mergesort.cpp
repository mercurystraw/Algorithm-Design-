/*#include<iostream>
#include<algorithm>
using namespace std;
const int M = 105, N = 1010;

void mergesort(int q[], int l, int r) {				//1004
	if (l >= r)return;
	int  mid = (l + r) / 2;
	mergesort(q, l, mid); mergesort(q, mid + 1, r);
	int k = 0, i = l, j = mid + 1;
	int temp[N];
	while (i <= mid && j <= r) {
		if (q[i] <= q[j])temp[k++] = q[i++];
		else temp[k++] = q[j++];
	}
	while (i <= mid)temp[k++] = q[i++];
	while (j <= r)temp[k++] = q[j++];
	for (int i = l, j = 0; i <= r; i++, j++)q[i] = temp[j];

}

int main() {
	int m; cin >> m;
	int a[M][N];
	int cnt[M];
	for (int i = 0; i < m; i++) {
		cin >> a[i][0];
		cnt[i] = a[i][0];
		for (int j = 1; j <= a[i][0]; j++)cin >> a[i][j];
	}
	for (int i = 0; i < m; i++) {
		mergesort(a[i], 1, (3 + cnt[i]) / 4);
		mergesort(a[i], (3 + cnt[i]) / 4 + 1, (1 + cnt[i]) / 2);
		mergesort(a[i], (3 + cnt[i]) / 2, (3 + 3 * cnt[i]) / 4);
		mergesort(a[i], (3 + 3 * cnt[i]) / 4 + 1, cnt[i]);
		for (int j = 1; j < cnt[i] + 1; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}*/