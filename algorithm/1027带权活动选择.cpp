/*#include<iostream>
#include<algorithm>
using namespace std;
const int N = 10001;

struct Event {
	int s, f, v;
	bool operator< (const Event& W)const {
		return f < W.f;
	}

}event[N];
int dp[N];       //dp[i]��ʾ�1-i�����Ȩ��

int main() {
	int m, n;
	cin >> m;
	while(m--){
		cin >> n;
		
		for (int i = 1; i <= n; i++) {
			cin >> event[i].s >> event[i].f >> event[i].v;
			dp[i] = 0;
		}
		dp[0] = 0;
		dp[1] = event[1].v;
		event[0].s = event[0].f = event[0].v = 0;
		sort(event + 1, event + 1 + n);

		for (int i = 1; i <= n; i++) {
			for (int j = i - 1; j >= 0; j--) {		//����j>=0����1 ����𰸴��� ��Ϊ�������j>=1��ô��ʼ��Ļ����dp�޷���ֵ(if����)
				if (event[j].f <= event[i].s) {   //�ҵ���һ������ʱ���ڻi��ʼʱ��֮ǰ��
					dp[i] = max(dp[i - 1], dp[j] + event[i].v);   //����i� ��dp[i]=���棻����i�����dp[i]=dp[i-1];
					break;
				}
			}
		}
		cout << dp[n] << endl;

	}
	return 0;
}*/