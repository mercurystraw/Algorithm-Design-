//#include<iostream>
//#include<vector>
//using namespace std;
//const int N = 50001;
//int dp[N][2];	//dp[i][0]�����i���ڵ�Ϳ���˺�ɫ,����Ϊ���ڵ������������ɫ�ڵ���; dp[i][1]����Ϳ���˰�ɫ����
//int ifp[N];
//vector<int>* child;
//
//int solve(int root) {
//	dp[root][0] = 1; //��ʼ����
//	dp[root][1] = 0;
//	for (int i = 0; i < child[root].size(); i++) {
//		solve(child[root][i]);
//		dp[root][0] += dp[child[root][i]][1];
//		dp[root][1] += max(dp[child[root][i]][1], dp[child[root][i]][0]);
//	}
//	return max(dp[root][0], dp[root][1]);
//}
//int main() {
//	int T;
//	cin >> T;
//	while (T--) {
//		int n; cin >> n;
//		// ��ʼ���ڽӱ�ע��ڵ����Ǵ�1��ʼ��
//		child = new vector<int>[n + 1];
//		for (int i = 0; i < N; i++) {
//			ifp[i] = 0;
//		}
//		for (int i = 0; i < n-1; i++) {//n-1�Խ��
//			int u, v;
//			cin >> u >> v;
//			child[u].push_back(v);
//			ifp[v] = 1; //v�и��ڵ�u��
//
//
//		}
//		int root = 0;
//		for (int i = 1; i <= n; i++) { //����Ŵ�1��ʼ
//			if (ifp[i] == 0) {
//				root = i;
//				break;
//			}
//		}
//		int k = solve(root);
//		cout << k << endl; 
//	}
//	return 0;
//}