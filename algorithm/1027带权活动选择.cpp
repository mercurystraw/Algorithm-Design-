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
int dp[N];       //dp[i]表示活动1-i的最大权重

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
			for (int j = i - 1; j >= 0; j--) {		//这里j>=0而非1 否则答案错误 因为考虑如果j>=1那么开始早的活动可能dp无法赋值(if条件)
				if (event[j].f <= event[i].s) {   //找到第一个结束时间在活动i开始时间之前的
					dp[i] = max(dp[i - 1], dp[j] + event[i].v);   //包含i活动 则dp[i]=后面；不含i活动，则dp[i]=dp[i-1];
					break;
				}
			}
		}
		cout << dp[n] << endl;

	}
	return 0;
}*/