/*#include<iostream>
#include<vector>
using namespace std;\
//̰�ģ������ڵ�������İ׵������������׵�������ĺڵ����������ά��������vector��black��white�����ֱ��¼��Щ�����ĵ�ȴ��ʱδ�������ĵ㣬
//����������������������ÿ��Ѱ������ĵ㣬�����ȥ��һ�������в鿴�Ƿ�Ϊ�գ����ǿգ�������ĩһ��Ԫ�ؼ�Ϊ������������Ǹ��㡣
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