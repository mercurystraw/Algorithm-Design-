/*#include<iostream>
using namespace std;
const int N = 10000;
int a[N];
int dp[N];
int main() {
	int m,n; cin >> m;
	for (int k = 0; k< m; k++) {
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];	//读入数据
			dp[i] = 1;		//初始化dp  dp[i]表示a[i]存在的最长非降序子序列长度
		}

		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				if (a[j] >= a[i])dp[j] = max(dp[i] + 1, dp[j]);
			}
		}
		int res = 1;
		for (int i = 0; i < n; i++)res = max(res, dp[i]);
		cout << res << endl;
	}
	return 0;
}		//动态规划（之前不知道为啥runtime error了，后来随手一交有AC了。。）

*/
/*for (int i = 1; i < n; i++) {
			for (int j = 0; j < i; j++) {
				if (a[i] > a[j])dp[i] = max(dp[j] + 1, dp[i]);
			}
		}*/

		//以上都能过样例 动态规划 但是O(n^2)  怀疑是时间复杂度太高了



