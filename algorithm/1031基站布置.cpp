/*#include<iostream>
#include<algorithm>
#include <cstdlib>
#include <cstring>
#include <cmath>
using namespace std;
int m, n;
double d;
const int N = 10010;
int cover[N];
struct po_t {
	double x, y;
	double rsect;
}po[N];

const double minINF = 0.00000000001;//浮点误差
int cmp(const void* a, const void* b) {
	po_t* ta, * tb;
	ta = (po_t*)a;
	tb = (po_t*)b;
	double temp = ta->rsect - tb->rsect;
	if (-minINF <= temp && temp <= minINF) {//浮点数比较注意预留一定的精度判断
	//if(temp == 0) {
		return 0;
	}
	else if (temp < 0) {
		return -1;
	}
	else {
		return 1;
	}
}
int main() {
	cin >> m;
	for (int s = 0; s < m; s++) {
		scanf("%d%lf", &n, &d);
		for (int i = 0; i < n; i++) {
			scanf("%lf%lf", &po[i].x, &po[i].y);
			po[i].rsect = po[i].x + sqrt(d * d - po[i].y * po[i].y);
		}
		memset(cover, 0, sizeof(cover));
		qsort(po, n, sizeof(po_t), cmp);
		int res = 0;
		for (int i = 0; i < n; i++) {
			if (cover[i] == 1) {
				continue;
			}
			res = res + 1;;
			for (int j = i; j < n; j++) {
				if (po[j].rsect - po[i].rsect > 2 * d)
					break;
				if (cover[j] == 1)
					continue;
				double temp = (po[j].x - po[i].rsect) * (po[j].x - po[i].rsect) + po[j].y * po[j].y - d * d;
				if (temp <= minINF) {
					cover[j] = 1;
				}
			}
		}
		printf("%d\n", res);
	}
	return 0;
}*/
