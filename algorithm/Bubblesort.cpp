/*#include<iostream>
#include<algorithm>
using namespace std;
const int M = 105, N = 1010;


void bubblesort(int q[],int l,int r) {
	int temp;
	for(int i=0;i<r-l;i++){
		for (int j = 0; j < r-l- i; j++) {
			if (q[j] > q[j + 1]) {
				int temp = q[j];
				q[j] = q[j + 1];
				q[j + 1] = temp;
			}
		}
	}
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
		bubblesort(a[i], 1, cnt[i]);
		for (int j = 1; j <cnt[i]+1; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}*/