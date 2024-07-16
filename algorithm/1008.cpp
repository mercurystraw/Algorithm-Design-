/*#include<iostream>
#include<algorithm>
using namespace std;
const int N = 110;
int a[N];
int n;
int dp[N];
int res[N];
int cnt[N];
int DP[N];
void calmin() {
	for (int i = 0; i < n; i++)dp[i] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = i-1; j >= 0; j--) {
			if (a[j] >=a[i])
				dp[i] = max(dp[i], dp[j] + 1);  //求最长非升序子序列长度
		}
	}

}

void calnum() {
	for (int i = 0; i < n; i++)DP[i] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if (a[j] > a[i])
				DP[j] = max(DP[i]+1, DP[j]);	//求最长升序子序列长度
		}
	}


}
int main() {
	int m;
	cin >> m;
	
	

	for (int i = 0; i < m; i++) {
		cin >> n;
		for (int s = 0; s < n; s++) {
			cin >> a[s];
		}

		res[i] = 0;
		calmin();
		for (int j = 0; j < n; j++) {
			res[i] = max(res[i], dp[j]);
		}
		cnt[i] = 0;
		calnum();
		for (int j = 0; j < n; j++) {
			cnt[i] = max(cnt[i], DP[j]);
		}

		
	}
	for (int i = 0; i < m; i++) { 
		cout << res[i] << " "<< cnt[i] << endl;
	}
	
	return 0;
}*/