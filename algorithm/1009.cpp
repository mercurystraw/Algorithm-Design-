/*#include<iostream>
using namespace std;
const int N = 110;
int a[N];
int n;
int dp[N];
int res[N];
void calmin() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++)dp[i] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = i; j >= 0; j--) {
			if (a[j] > a[i])
				dp[i] = max(dp[i], dp[j] + 1);
		}
	}

}

int main() {
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		res[i] = 0;
		calmin();
		for (int j = 0; j < n; j++) {
			res[i] = max(res[i], dp[j]);
		}
	}
	for (int i = 0; i < m; i++) { cout << res[i] << endl; }
	return 0;
}*/