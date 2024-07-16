/*#include<iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int N = 10001;

int l[N];
int p[N];
int dp[N][N];
int main() {
	int m,n,k; cin >> m;
	for (int s = 0; s < m; s++) {
		cin >> n >> k;	
		
		for (int i = 1; i <= k; i++) {
			cin >> l[i] >> p[i];
		}

		for (int i = 0; i < k; i++) {
			for (int j = 0; j < n; j++) {
				dp[i][j] = 0;
			}
		}
		for (int i = 1; i <= k; i++) {
			for (int j = 0; j <= n; j++) { 
						//for (int c = 0; j - c * l[i] >= 0; c++)  //O（n^3）时间复杂度太大了 需要优化 根据迭代关系减少一层循环
						//dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - c * l[i]] + c * p[i]);
				if (j - l[i] >= 0)dp[i][j] = max(dp[i - 1][j], dp[i][j - l[i]] + p[i]);
				else dp[i][j] = dp[i - 1][j]; 
				
			}
		}
		cout << dp[k][n] << endl;   //表示前k个价格 以及可用的长度为n；

	}
	return 0;
}*/
//以上runtime error 了 但是思路正确 样例也过了 可能二维数组开太大了 应该用一维数组
// 
// 
//以下为通过版本

/*#include <iostream>
using namespace std;
const int N = 10001;
int l[N];
int p[N];
int dp[N];

int main() {
    int m, n, k;
    cin >> m;

    for (int s = 0; s < m; x++) {
        cin >> n >> k;    // 分别表示钢条长度以及价格表中不同价格数量
        int max_profit = 0;

        // 初始化 dp 数组为 0
        for (int i = 0; i <= n; i++)
            dp[i] = 0;

        // 输入钢条长度和对应价格
        for (int i = 1; i <= k; i++)
            cin >> l[i] >> p[i];

        // 动态规划求解最大利润
        for (int i = 1; i <= k; i++)
            for (int j = l[i]; j <= n; j++) {
                dp[j] = max(dp[j], dp[j - l[i]] + p[i]);
                if (dp[j] > max_profit)
                    max_profit = dp[j];
            }

        cout << max_profit << endl;
    }

    return 0;
}*/

