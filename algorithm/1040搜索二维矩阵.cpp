/*#include<iostream>
using namespace std;
int nums, m, n, target;
int main() {
	cin >> nums;
	while (nums--) {
		cin >> m >> n >> target;
		if (m <= 0 || n <= 0)
			cout << "false" << endl;
		else {
			bool flag = 0;
			int** a = new int* [m];
			for (int j = 0; j < m; j++)
				a[j] = new int[n];
			for (int i = 0; i < m; i++)
				for (int j = 0; j < n; j++)
					cin >> a[i][j];              //动态分配内存过了 但是全局数组然后输入runtime error了。。

			int i = 0, j = n - 1; // 从右上角开始搜索（或者左下角也行）
			while (i < m && j >= 0) {
				if (a[i][j] == target) {
					flag = 1;
					break;
				}
				else if (a[i][j] < target) {
					i++; // 目标值较大，向下移动一行
				}
				else {
					j--; // 目标值较小，向左移动一列
				}
			}
			if (flag == 1) cout << "true" << endl;
			else cout << "false" << endl;
		}
	}
	return 0;
}*/
//O(m+n)

/*#include<iostream>
#include<algorithm>
using namespace std;
const int N = 1001;
int a[N][N];

int main() {
	int nums, m, n, target;
	cin >> nums;
	while (nums--) {
		cin >> m >> n >> target;
		bool flag=0;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				cin >> a[i][j];
			}
		}
		
		for (int i = 0; i < m; i++) {
			if (a[i][n-1] == target) {
				flag = 1;
				break;
			}
			else if (a[i][n-1] > target) {
				if (binary_search(a[i], a[i] + n, target)) {
					flag = 1;
					break;
				}
			}
			else continue;
			
		}
		if (flag == 1)cout << "true" << endl;
		else cout << "false" << endl;

	}
	return 0;
}*/ // O(m*logn)	runtime error 了