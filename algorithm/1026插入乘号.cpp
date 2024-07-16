/*#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;

const int N = 21;
long long a[N];
long long sum[N];       //sun[i]��ʾ1-i��Ԫ��֮��
long long dp[N][N];           //dp[i][j]��ʾ1-i�����в���j���˺�    //ת�Ʒ���:��k������˺�,dp[i][j] = max(dp[k - 1][j - 1] * s, dp[i][j]);
int n, k;

int main()
{
    int M;
    cin >> M;
    while (M--) {

        sum[0] = 0;
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            sum[i] = sum[i - 1] + a[i];
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= k; j++) {
                dp[i][j] = 0;
            }
        }
        for (int i = 1; i <= n; i++)  dp[i][0] = sum[i];

        for (int i = 2; i <= n; i++)
        {
            for (int j = 1; j <= min(i - 1, k); j++)
            {
                for (int k = 2; k <= i; k++)
                {
                    long long s = sum[i] - sum[k - 1];
                    dp[i][j] = max(dp[k - 1][j - 1] * s, dp[i][j]);
                }
            }
        }

        cout << dp[n][k] << endl;
    }
    return 0;
}*/