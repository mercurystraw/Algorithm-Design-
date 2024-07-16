/*#include<iostream>
using namespace std;
const int N = 501;
string x;
string y;

void solution(int m, int n, const string& x, const string& y, int dp[][N]) {
	for (int i = 1; i <= m; i++)dp[i][0] = 0;
	for (int i = 1; i <= n; i++)dp[0][i] = 0;
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			if (x[i-1] == y[j-1])dp[i][j] = dp[i - 1][j - 1] + 1;
			else { dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]); }
		}
	}
	cout << dp[m][n] << endl;
}
int main() {
	int cnt; cin >> cnt;
	for (int k = 0; k < cnt; k++) {
		cin >> x >> y;
		int m = x.size();
		int n = y.size();
		int dp[N][N] = { 0 };
		solution(m,n,x,y,dp);
	}
	return 0;
}*/