/*#include<iostream>
#include<algorithm>
using namespace std;
int x[300000];
int l = 300000, r = 0;
int main()								//˼·���߶ȷ����仯�϶�������x x+1����x-1,x���߶Ȳ����˱仯 
										//�����ܳ���x��x+1ͬ�߶ȵ��м�͵��������˽�x�������� ���ų�
{
	int T, a, b, h;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> a >> b >> h;//��ʾÿ������������ұ߽�����͸߶�.
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
