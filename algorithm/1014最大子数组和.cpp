/*#include<iostream>
using namespace std;
const int N = 50001;
int n;
int a[N];
int dp[N];
int main() {
	int m; cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> a[j];
			dp[j] = 0;
		}
		dp[0] = a[0];
		for (int j = 1; j < n; j++) {
			dp[j] = max(dp[j - 1] + a[j], a[j]);
		}
		int sum = -1e9;
		for (int j = 0; j < n; j++)sum = max(sum, dp[j]);//��dp�бȽ�������ĺ�
		cout << sum << endl;//����ֶκ�
	}
	return 0;
}*/