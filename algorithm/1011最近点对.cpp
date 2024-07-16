/*#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<algorithm>
using namespace std;
const int N = 50001;
struct position_t {
	int x; int y;
}pos[N], tpos[N];

int n;
											
double distance(int i, int j) {
	return 1.0 * pow((pos[i].x - pos[j].x),2) + 1.0 * pow((pos[i].y - pos[j].y), 2);
}
												//这里距离计算先开根号的话OJ上会出现WA，也是无语住了
int cmp_y(const void* a, const void* b) {
	position_t* p1 = (position_t*)a;
	position_t* p2 = (position_t*)b;
	return p1->y - p2->y;
}
int cmp_xy(const void* a, const void* b) {
	position_t* p1 = (position_t*)a;
	position_t* p2 = (position_t*)b;
	if (p1->x != p2->x) {
		return p1->x - p2->x;
	}
	else {
		return p1->y - p2->y;
	}
}

double divide(int low, int high) {
	if (low >= high) {
		return ((long long int)2) << 60;
	}
	if (low + 1 == high) {
		return distance(low, high);
	}
	int mid = (low + high) / 2;
	int midx = pos[mid].x;
	double d1 = divide(low, mid);
	double d2 = divide(mid + 1, high);
	double mymin = d1 > d2 ? d2 : d1;
	

	int k = 0;
	for (int i = low; i <= high; i++) {
		if (abs(midx - pos[i].x) < mymin) {
			tpos[k].x = pos[i].x;
			tpos[k].y = pos[i].y;
			k++;					//记录候选点 与mid相差不超过d的 
		}
	}
	qsort(tpos, k, sizeof(position_t), cmp_y); //根据y坐标进行排序    
	for (int i = 0; i < k - 6; i++) {
		for (int j = 1; j <=6; j++) { 
			double temp = 1.0 * (tpos[i].x - tpos[i + j].x) * (tpos[i].x - tpos[i + j].x) + 1.0 * (tpos[i].y - tpos[i + j].y) * (tpos[i].y - tpos[i + j].y);
			if (temp < mymin) mymin = temp;
		}
	}
	return mymin;
}

void solution() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> pos[i].x >> pos[i].y;
	}
	qsort(pos, n, sizeof(position_t), cmp_xy);
	printf("%.2lf\n", sqrt(divide(0, n - 1)));
}
int main() {
	int m; cin >> m;
	for (int k = 0; k < m; k++) {
		solution();
	}
	return 0;
}*/