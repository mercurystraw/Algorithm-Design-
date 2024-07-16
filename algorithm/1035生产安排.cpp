/*#include<iostream>
#include<algorithm>
using namespace std;
struct Produce {
	long long  c, y, w;
};

int main() {	//贪心策略，每个月需要用的成本为 提供数量*每个产品的最低成本；而最低成本=min（当月的产品成本，上月的最低成本+存储费用1）
	int m, n;
	cin >> m;
	while(m--) {
		cin >> n;
		Produce* produce = new Produce[n+1];

		for(int i=0;i<n;i++){
			cin >> produce[i].c;
			produce[i].w = produce[i].c;
		}
		for (int i = 0; i < n; i++) {
			cin >> produce[i].y;
		}
		long long  sum = 0;
		sum+=produce[0].w * produce[0].y;
		for (int i = 1; i < n; i++) {
			produce[i].w = min(produce[i].w, produce[i - 1].w + 1);
			sum += produce[i].w * produce[i].y;	
		}
		cout << sum << endl;
		
	}
	return 0;
}*/