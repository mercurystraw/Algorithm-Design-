//maxproduct
/*#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int n, k, m;
const int N = 41, M = 10;
char a[N];

int dp[N][M];
int num[N][N];
int res[N];
void turnnum() {//num[i][j]表示下标i-j的字符串的数字化
    for (int i = 0; i < n; i++) {
        int temp = 0;
        for (int j = i; j < n; j++) {
            temp = temp * 10 + a[j] - '0';
            num[i][j] = temp;
        }
    }
}
void maxproduct() {
    for (int i = 0; i < n; i++) {
        dp[i][0] = num[0][i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= k; j++) {
            for (int s = 0; s < i; s++) {
                dp[i][j] = max(dp[i][j], dp[s][j - 1] * num[s + 1][i]);
            }
        }
    }
}
void solve() {
    for (int i = 0; i < m; i++) {
        memset(dp, 0, sizeof(dp));
        cin >> n >> k;
        memset(a, 0, sizeof(a));
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        turnnum();
        maxproduct();
        res[i] = dp[n - 1][k];
    }
}
/*int main() {

    cin >> m;
    solve();
    for (int i = 0; i < m; i++) {
        cout << res[i] << endl;
    }
    return 0;

}*/