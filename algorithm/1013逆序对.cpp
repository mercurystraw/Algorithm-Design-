/*#include<iostream>
using namespace std;
int n;
const int N = 50001;
int cnt;
int a[N];
void mergesort(int q[], int l, int r) {	
	if (l >= r)return;
	int  mid = (l + r) / 2;
	mergesort(q, l, mid); mergesort(q, mid + 1, r);
	int k = 0, i = l, j = mid + 1;
	int temp[N];
	while (i <= mid && j <= r) {
		if (q[i] <= q[j])temp[k++] = q[i++];
		else { 
			temp[k++] = q[j++]; 
			cnt += (mid - i + 1);   //计算逆序对的数量；
		}
	}
	while (i <= mid)temp[k++] = q[i++];
	while (j <= r)temp[k++] = q[j++];
	for (int i = l, j = 0; i <= r; i++, j++)q[i] = temp[j];
}
int main() {
	int m; cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> a[j];
		}
		cnt = 0;
		mergesort(a, 0, n - 1);
		cout << cnt << endl;
	}
	return 0;
}*/