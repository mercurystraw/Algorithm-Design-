//#include<iostream>
//#include<algorithm>
//#include<climits>
//using namespace std;
//const int N = 10001, M = 101;
//int k, n;
//int dp[M][N]; //dp[i][j]��ʾi��������j��¥ʱ����С�ƶ�����
//
//void solve() {
//	if (n == 0) {
//		dp[k][n] = 0; return;
//	}
//	
//	for (int i = 1; i <= n; i++)dp[1][i] = i; //ֻ��һ�����������
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
//�������ֲ��ҵ�˼· runtime error�� ʱ�临�Ӷ�O��K*N^2��̫����


//#include <iostream>
//#include <algorithm>
//#include <climits>
//using namespace std;
//const int N = 10001, M = 101; //1<=K<=100;1<=N<=10000 �п��ܶ�ά���鿪̫����
//int k, n;
//int dp[M][N]; // dp[i][j]��ʾi��������j��¥ʱ����С�ƶ�����
////x=1-j; res=1+max(dp[i-1][x-1],dp[i][j-x])  dp[i][j]=min(dp[i][j],res)
//
//void solve() {
//    if (n == 0) {
//        dp[k][n] = 0;
//        return;
//    }
//
//    for (int i = 1; i <= n; i++) dp[1][i] = i; // ֻ��һ�����������
//    for (int i = 2; i <= k; i++) {
//        for (int j = 1; j <= n; j++) {
//            dp[i][j] = INT_MAX;
//            int lo = 1, hi = j;
//            while (lo <= hi) {    //����dp[i][j]����j�ĵ����ԣ�jԽ��dp�϶�Խ�󣬿���ͨ�����ּ�Сʱ�临�Ӷ�
//                int x = (lo + hi) / 2;
//                int broken = dp[i - 1][x - 1]; // �������� ��x����
//                int not_broken = dp[i][j - x]; // ����û��  ��x�ݼ� ��dp[i][j]ϣ���ҵ����������ֵ������Сֵ
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
// �����ֲ��ҵ�˼· ʱ�临�Ӷ�ΪO��K*NlogN�� AC��

