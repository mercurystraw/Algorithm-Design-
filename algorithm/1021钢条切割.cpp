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
						//for (int c = 0; j - c * l[i] >= 0; c++)  //O��n^3��ʱ�临�Ӷ�̫���� ��Ҫ�Ż� ���ݵ�����ϵ����һ��ѭ��
						//dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - c * l[i]] + c * p[i]);
				if (j - l[i] >= 0)dp[i][j] = max(dp[i - 1][j], dp[i][j - l[i]] + p[i]);
				else dp[i][j] = dp[i - 1][j]; 
				
			}
		}
		cout << dp[k][n] << endl;   //��ʾǰk���۸� �Լ����õĳ���Ϊn��

	}
	return 0;
}*/
//����runtime error �� ����˼·��ȷ ����Ҳ���� ���ܶ�ά���鿪̫���� Ӧ����һά����
// 
// 
//����Ϊͨ���汾

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
        cin >> n >> k;    // �ֱ��ʾ���������Լ��۸���в�ͬ�۸�����
        int max_profit = 0;

        // ��ʼ�� dp ����Ϊ 0
        for (int i = 0; i <= n; i++)
            dp[i] = 0;

        // ����������ȺͶ�Ӧ�۸�
        for (int i = 1; i <= k; i++)
            cin >> l[i] >> p[i];

        // ��̬�滮����������
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

