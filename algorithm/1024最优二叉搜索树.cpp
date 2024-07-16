/*#include<iostream>
using namespace std;
#define INF 0x3f3f3f3f
const int M = 501;
int key[M];
double p[M], q[M], c[M][M], w[M][M];
void BST(double p[], double q[], int n) {
	for (int i = 0; i <= n; i++) {
		c[i][i] = 0;
		w[i][i] = q[i];
	}
	for (int len = 1; len <= n; len++) {  //先确定i+1到j的长度
		for (int i = 0; i <= n - len; i++) {
			int j = i + len;
			c[i][j] = INF;
			w[i][j] = w[i][j - 1] + p[j] + q[j]; 

			for (int k = i + 1; k <= j; k++) {
				c[i][j] = min(c[i][j], w[i][j] + c[i][k - 1] + c[k][j]);
			}
		}
	}

}
int main() {
	int T, N;
	cin >> T;
	while (T--) {
		cin >> N;
		for (int i = 0; i < N; i++)
			cin >> key[i];
		for (int i = 1; i <= N; i++) {
			cin >> p[i];
		}
		for (int i = 0; i <= N; i++) {
			cin >> q[i];
		}
		BST(p, q, N);
		printf("%.6lf\n", c[0][N]);
	}
	return 0;
}*/