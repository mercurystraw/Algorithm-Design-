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
			cin >> a[i];	//��������
			dp[i] = 1;		//��ʼ��dp  dp[i]��ʾa[i]���ڵ���ǽ��������г���
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
}		//��̬�滮��֮ǰ��֪��Ϊɶruntime error�ˣ���������һ����AC�ˡ�����

*/
/*for (int i = 1; i < n; i++) {
			for (int j = 0; j < i; j++) {
				if (a[i] > a[j])dp[i] = max(dp[j] + 1, dp[i]);
			}
		}*/

		//���϶��ܹ����� ��̬�滮 ����O(n^2)  ������ʱ�临�Ӷ�̫����



