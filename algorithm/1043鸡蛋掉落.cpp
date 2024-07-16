//#include<iostream>
//#include<algorithm>
//#include<climits>
//using namespace std;
//const int N = 10001, M = 101;
//int k, n;
//int dp[M][N]; //dp[i][j]表示i个鸡蛋，j层楼时的最小移动次数
//
//void solve() {
//	if (n == 0) {
//		dp[k][n] = 0; return;
//	}
//	
//	for (int i = 1; i <= n; i++)dp[1][i] = i; //只有一个鸡蛋的情况
//	for (int i = 2; i <= k; i++) {
//		for (int j = 1; j <= n; j++) {
//			dp[i][j] = INT_MAX;
//			for (int x = 1; x <= j; x++) {
//				int res = 1 + max(dp[i - 1][x - 1], dp[i][j - x]);
//				dp[i][j] = min(dp[i][j], res);
//			}
//		}
//	}
//}
//
//
//int main() {
//	int nums;
//	cin >> nums;
//	while (nums-- ) {
//		cin >> k >> n;
//		solve();
//		
//		cout << dp[k][n] << endl;
//	}
//	return 0;	
//}
//不带二分查找的思路 runtime error了 时间复杂度O（K*N^2）太高了


//#include <iostream>
//#include <algorithm>
//#include <climits>
//using namespace std;
//const int N = 10001, M = 101; //1<=K<=100;1<=N<=10000 有可能二维数组开太大了
//int k, n;
//int dp[M][N]; // dp[i][j]表示i个鸡蛋，j层楼时的最小移动次数
////x=1-j; res=1+max(dp[i-1][x-1],dp[i][j-x])  dp[i][j]=min(dp[i][j],res)
//
//void solve() {
//    if (n == 0) {
//        dp[k][n] = 0;
//        return;
//    }
//
//    for (int i = 1; i <= n; i++) dp[1][i] = i; // 只有一个鸡蛋的情况
//    for (int i = 2; i <= k; i++) {
//        for (int j = 1; j <= n; j++) {
//            dp[i][j] = INT_MAX;
//            int lo = 1, hi = j;
//            while (lo <= hi) {    //根据dp[i][j]关于j的单调性：j越大dp肯定越大，可以通过二分减小时间复杂度
//                int x = (lo + hi) / 2;
//                int broken = dp[i - 1][x - 1]; // 鸡蛋碎了 随x递增
//                int not_broken = dp[i][j - x]; // 鸡蛋没碎  随x递减 而dp[i][j]希望找到（两者最大值）的最小值
//                if (broken > not_broken) {
//                    hi = x - 1;
//                    dp[i][j] = min(dp[i][j], broken + 1);
//                }
//                else {
//                    lo = x + 1;
//                    dp[i][j] = min(dp[i][j], not_broken + 1);
//                }
//            }
//        }
//    }
//}
//
//int main() {
//    int nums;
//    cin >> nums;
//    while (nums--) {
//        cin >> k >> n;
//        solve();
//        cout << dp[k][n] << endl;
//    }
//    return 0;
//}
// 带二分查找的思路 时间复杂度为O（K*NlogN） AC了

