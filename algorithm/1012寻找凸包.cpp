/*#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;
const int N = 10000;
struct Position {
	int x; int y;
	double angle;
	double len;
}pos[N], stack[N];

int n, top;

int cmp_yx(const void* a, const void* b) {
	Position* p1 = (Position*)a;
	Position* p2 = (Position*)b;
	if (p1->y != p2->y) {
		return p1->y - p2->y;
	}
	else return p1->x - p2->x;			//数组会按照 `y` 成员从小到大排列，相同 `y` 值的元素按照 `x` 成员从小到大排列。
										//返回值大于0时，说明p1排在p2后面，也就是可以找到最左下的元素
}

int cmp_angle(const void* a,const void *b) {
	Position *p1 = (Position*)a;
	Position* p2 = (Position*)b;
	if (p1->angle > p2->angle)return 1;			//大夹角的排在后面
	else if (p1->angle < p2->angle)return -1;
	else {										//同夹角但是长度长的排在后面
		if (p1->len - p2->len > 0)return 1;
		else if (p1->len - p2->len < 0)return -1;
		else
		{
			return 0;
		}
	}
}

int findp0() {						//找到最左下的元素的下标
	int minx = 2147483647;			//'INT_MAX'
	int miny = 2147483647;
	int idx = 0;
	for (int i = 0; i < n; i++) {
		if (pos[i].y < miny) {
			miny = pos[i].y;
			idx = i;
		}
	}
	for (int i = 0; i < n; i++) {
		if (pos[i].y==miny&&pos[i].x < minx) {
			minx = pos[i].x;
			idx = i;
		}
	}
	return idx;

}
void removesame() {
	qsort(pos, n, sizeof(Position), cmp_yx);
	int k = 0;
	for (int i = 1; i < n; i++) {
		if (pos[i].x == pos[k].x && pos[i].y == pos[k].y) {

		}
		else {
			k++;
			pos[k].x = pos[i].x;
			pos[k].y = pos[i].y;
		}
	}
	n = k + 1;

}
void sortangle() {
	for (int i = 1; i < n; i++) {
		pos[i].len= sqrt((pos[i].y - pos[0].y) * (pos[i].y - pos[0].y) + (pos[i].x - pos[0].x) * (pos[i].x - pos[0].x));
		pos[i].angle = acos((pos[i].x - pos[0].x) / pos[i].len);
	}
	qsort(&pos[1], n - 1, sizeof(Position), cmp_angle);
}

int push(int i) {
	stack[top].x = pos[i].x;
	stack[top].y = pos[i].y;
	stack[top].angle = pos[i].angle;
	top++;
	return top;
}

int pop() {
	top--;
	return top;
}

int isright(int a, int b, int x, int y) {
	if ((a * y - b * x) > 0)return 0;
	else return 1;
}

int canpop(int i) {
	if (top <= 2) {
		return 0;
	}
	if (isright(stack[top - 1].x - stack[top - 2].x, stack[top - 1].y - stack[top - 2].y, pos[i].x - stack[top - 2].x, pos[i].y - stack[top - 2].y)) {
		return 1;
	}
	return 0;

}
int isonline(int a, int b, int x, int y) {		//判断点是否在连线上
	if (a * y - b * x == 0) {
		return 1;
	}
	return 0;
}

int main() {
	int M;
	cin >> M;
	for (int s = 1; s <= M;s++) {
		printf("case %d:\n", s);
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> pos[i].x >> pos[i].y;
		}
		removesame();
		int idx = findp0();

		Position temp = pos[idx];

		for (int i = idx; i > 0; i--) {
			pos[i] = pos[i - 1];
		}
		pos[0] = temp;

		sortangle();

		top = 0;
		push(0);
		int k = 2;
		for (; k < n; k++) {
			if (!isonline(pos[k].x - pos[0].x, pos[k].y - pos[0].y, pos[1].x - pos[0].x, pos[1].y - pos[0].y)) {
				break;
			}
		}
		push(k - 1);
		push(k);
		for (int i = k + 1; i < n; i++) {
			while (canpop(i)) {
				pop();
			}
			push(i);
		}

		for (int i = 0; i < top; i++) {
			printf("%d %d\n", stack[i].x, stack[i].y);
		}

		
	}
	return 0;
}*/
