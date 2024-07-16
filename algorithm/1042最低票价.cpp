/*#include<iostream>
using namespace std;
const int N = 365 + 30;
int dp[N];          //dp[i]表示0-i天所需要的最小花费
int m;
int cost[3];
int* days;
bool ifinday(int x) {
    for (int i = 0; i < m; i++) {
        if (days[i] == x)
            return 1;
    }
    return 0;
}

int main() {
    int nums;
    cin >> nums;
    while (nums--) {
        cin >> m;
        days = new int[m];
        for (int i = 0; i < m; i++) {
            cin >> days[i];
        }
        for (int i = 0; i < 3; i++) {
            cin >> cost[i];
        }

        for (int i = 0; i < N; i++)
            dp[i] = 0;

        for (int i = 1; i <= days[m - 1]; i++) {  //+30避免出现下标为负的
            if (!ifinday(i))
                dp[i+30] = dp[i+30 - 1];
            else {
                dp[i+30] = min(min(dp[i+30 - 1] + cost[0], dp[i+30 - 7] + cost[1]), dp[i+30 - 30] + cost[2]);
            }
        }

        cout << dp[days[m - 1] + 30] << endl;
        delete[] days;
    }
    return 0;
}*/
