//#include<iostream>
//using namespace std;
//const int N = 1001;
//double dp[N][N];  //dp[i][j]��ʾǰi���Ŷ���j���ĸ���
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
//            p[i] *= 0.01;  // ���ٷֱ�ת��ΪС��
//        }
//
//         //��ʼ�� dp ����
//        for (int i = 0; i <= n; i++) {
//            for (int j = 0; j <= n; j++) {
//                dp[i][j] = 0.0;
//            }
//        }
//
//        dp[0][0] = 1.0;
//        for (int i = 1; i < n; i++) {
//            dp[i][0] = dp[i - 1][0] * (1 - p[i - 1]); // �����Ŷ������ѵ��������ͨ�����Ƶó�
//        }
//        for (int i = 1; i < n; i++) {
//            for (int j = 1; j < n; j++) {
//                dp[i][j] = dp[i - 1][j] * (1 - p[i - 1]) + dp[i-1][j - 1] * p[i - 1]; // һ������״̬����
//            }//��ʵ��dp����ֻ������ ��Ϊÿһ��ֻ����һ�еĽ����Ȼ����е���
//        }
//
//        double res = 0.0;
//        for (int i = 1; i <= n; i++) {
//            res += i * dp[n - 1][i-1]; // ��������ֵ i������ѳ�i���� ˵����i-1���Ŷ���
//        }
//        printf("%.6lf\n", res);
//
//        delete[] p;
//    }
//    return 0;
//}
// 
//���ϴ�������ܹ����� ���ǳ����ڴ������� Memory Exceed

//#include<iostream>
//#include<cstring>
//#include<cstdio>
//using namespace std;
//
//const int N = 1001;
//double dp[N];  // dp[i]��ʾ������i���ŵĸ���
//
//int main() {
//    int T;
//    cin >> T;
//    while (T--) {
//        int n;
//        cin >> n;
//        double p[N];
//        for (int i = 0; i <= n; i++)dp[i] = 0.0; // ��ʼ��dp����Ϊ0
//
//        for (int i = 0; i < n - 1; i++) {
//            cin >> p[i];
//            p[i] *= 0.01;  // ���ٷֱ�ת��ΪС��
//        }
//
//        dp[0] = 1.0; // �����Ŷ������ѵ����
//        for (int i = 1; i < n; i++) {  //ÿ��iѭ���ʹ�����ǰi���� Ȼ��ÿ��ѭ��������õ��ľ���dp[i][j]�Ľ�� Ȼ����ŵ�������n-1����
//            for (int j = n - 1; j >= 1; j--) {
//                dp[j] = dp[j] * (1 - p[i - 1]) + dp[j - 1] * p[i - 1];//�������鼼���������ڴ����ģ���Ϊÿ�ε�����ʵ��ֻ��Ҫǰһ�ε����Ľ��
//               
//            }
//            
//            dp[0] *= (1 - p[i - 1]); //û�Ŷ��ѵĸ���
//        }
//
//        double res = 0.0;
//        for (int i = 1; i <= n; i++) {
//            res += i * dp[i - 1]; // ��������ֵ��i������ѳ�i���֣�����i-1���Ŷ���
//        }
//        printf("%.6lf\n", res);
//    }
//    return 0;
//}
////һά����ⷨ ���ö��ظ����� ������Ҫ�ǿ��Լ����ڴ濪�� ʱ�任�ռ�



