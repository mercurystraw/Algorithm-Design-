/*#include<iostream>
using namespace std;
const int N = 501;
int dp[N][N];   //代表f(前i个物品，可用的体积j)
int n, c;
int s[N], v[N];
int main() {
	int m; cin >> m;
	for (int a = 0; a < m; a++) {
		cin >> n >> c;
		for (int i = 1; i <= n; i++) {
			cin >> s[i] >> v[i];
		}
		for (int i = 1; i <= n; i++) {
			dp[i][0] = 0;
			for (int j = 1; j <= c; j++) {
				if (j < s[i])dp[i][j] = dp[i - 1][j];
				else dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - s[i]]+v[i]);
			}
		}
		cout << dp[n][c] << endl;
	}
	return 0;
}*/