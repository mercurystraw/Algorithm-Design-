/*#include<iostream>
#include<algorithm>
using namespace std;
int x[300000];
int l = 300000, r = 0;
int main()								//思路：高度发生变化肯定是坐标x x+1或者x-1,x处高度产生了变化 
										//但可能出现x和x+1同高度但中间低的情况，因此将x点变成两倍 就排除
{
	int T, a, b, h;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> a >> b >> h;//表示每栋建筑物的左右边界坐标和高度.
		if (a < l)l = a;
		if (b > r)r = b;
		for (int j = a; j <= b; j++)
		{
			if (h > x[j * 2])     
				x[j * 2] = h;
			if (j < b)
				if (h > x[j * 2 + 1])
					x[j * 2 + 1] = h;
		}
	}
	for (int i = l; i <= r; i++)
	{
		if (x[(i * 2) - 1] != x[i * 2])cout << i << " " << x[i * 2] << endl;
		if (x[i * 2 + 1] != x[i * 2])cout << i << " " << x[i * 2 + 1] << endl;
	}
	return 0;
}*/
