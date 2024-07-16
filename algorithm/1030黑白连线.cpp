/*#include<iostream>
#include<vector>
using namespace std;\
//贪心：遇到黑点找最近的白点相连，遇到白点找最近的黑点相连，因此维护了两个vector（black和white），分别记录那些遇到的点却暂时未能相连的点，
//有了这样两个向量容器，每次寻找最近的点，便可以去另一个容器中查看是否为空，若非空，容器最末一个元素即为最近可相连的那个点。
int m; 
int n;
int main() {
	cin >> m;
	for (int k = 0; k < m; k++) {
		cin >> n;
		vector<int >points;
		int x;
		for (int i = 0; i < 2 * n; i++) {
			cin >> x;
			points.push_back(x);
		}
		int len = 0;
		vector<int>white, black;
		for (int i = 0; i < 2 * n; i++) {
			if (points[i] == 1) {
				if (!white.empty()) {
					len += (i - white.back());
					white.pop_back();
				}
				else {
					black.push_back(i);
				}
			}
			else {
				if (!black.empty()) {
					len += (i - black.back());
					black.pop_back();
				}
				else {
					white.push_back(i);
				}
			}
		}
		cout << len << endl;
	}
	return 0;

}*/