/*#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int N = 500;
int a[N][2];
int dp[N][N];  //dp[i][j]表示下标为i到j的矩阵连乘所需要的最少相乘次数
int main() {
	int m,n; cin >> m;
	for (int s = 0; s < m; s++) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a[i][0] >> a[i][1];
		}
		for (int len = 2; len <= n; len++) {   //计算长度为len的矩阵最小乘法次数
			for (int i = 0; i + len-1 < n; i++) {
				int j = i + len-1;
				dp[i][j] = 0x3f3f3f3f;
				for (int k = i; k < j; k++) {
					int res= dp[i][k] + dp[k + 1][j] + a[i][0] *a[k][1] * a[j][1];
					if (res < dp[i][j])
						dp[i][j] = res;
				}
			}
		}
		cout << dp[0][n - 1] << endl;

	}
	return 0;
}*/


/*for (int i = 0; i < n; i++) {
	for (int j = i+1; j < n; j++) {
		for (int k = i; k <= j-1; k++) {
			dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + row[i] * col[k] * col[j]);
			}
		}
	}*/
