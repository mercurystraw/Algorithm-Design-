//#include<iostream>
//using namespace std;
//const int N = 1001;
//double dp[N][N];  //dp[i][j]表示前i座桥断裂j座的概率
//
//int main() {
//    int T;
//    cin >> T;
//    while (T--) {
//        int n;
//        cin >> n;
//        double* p = new double[n];
//        for (int i = 0; i < n - 1; i++) {
//            cin >> p[i];
//            p[i] *= 0.01;  // 将百分比转换为小数
//        }
//
//         //初始化 dp 数组
//        for (int i = 0; i <= n; i++) {
//            for (int j = 0; j <= n; j++) {
//                dp[i][j] = 0.0;
//            }
//        }
//
//        dp[0][0] = 1.0;
//        for (int i = 1; i < n; i++) {
//            dp[i][0] = dp[i - 1][0] * (1 - p[i - 1]); // 所有桥都不断裂的情况可以通过递推得出
//        }
//        for (int i = 1; i < n; i++) {
//            for (int j = 1; j < n; j++) {
//                dp[i][j] = dp[i - 1][j] * (1 - p[i - 1]) + dp[i-1][j - 1] * p[i - 1]; // 一个递推状态方程
//            }//事实上dp可以只开两行 因为每一行只用上一行的结果，然后进行迭代
//        }
//
//        double res = 0.0;
//        for (int i = 1; i <= n; i++) {
//            res += i * dp[n - 1][i-1]; // 计算期望值 i代表分裂成i部分 说明有i-1座桥断了
//        }
//        printf("%.6lf\n", res);
//
//        delete[] p;
//    }
//    return 0;
//}
// 
//以上代码可以跑过样例 但是超出内存限制了 Memory Exceed

//#include<iostream>
//#include<cstring>
//#include<cstdio>
//using namespace std;
//
//const int N = 1001;
//double dp[N];  // dp[i]表示断裂了i座桥的概率
//
//int main() {
//    int T;
//    cin >> T;
//    while (T--) {
//        int n;
//        cin >> n;
//        double p[N];
//        for (int i = 0; i <= n; i++)dp[i] = 0.0; // 初始化dp数组为0
//
//        for (int i = 0; i < n - 1; i++) {
//            cin >> p[i];
//            p[i] *= 0.01;  // 将百分比转换为小数
//        }
//
//        dp[0] = 1.0; // 所有桥都不断裂的情况
//        for (int i = 1; i < n; i++) {  //每个i循环就代表着前i座桥 然后每次循环结束后得到的就是dp[i][j]的结果 然后接着迭代到第n-1座桥
//            for (int j = n - 1; j >= 1; j--) {
//                dp[j] = dp[j] * (1 - p[i - 1]) + dp[j - 1] * p[i - 1];//滚动数组技巧来降低内存消耗，因为每次迭代事实上只需要前一次迭代的结果
//               
//            }
//            
//            dp[0] *= (1 - p[i - 1]); //没桥断裂的概率
//        }
//
//        double res = 0.0;
//        for (int i = 1; i <= n; i++) {
//            res += i * dp[i - 1]; // 计算期望值，i代表分裂成i部分，即有i-1座桥断了
//        }
//        printf("%.6lf\n", res);
//    }
//    return 0;
//}
////一维数组解法 会多好多重复计算 但是主要是可以减少内存开销 时间换空间



