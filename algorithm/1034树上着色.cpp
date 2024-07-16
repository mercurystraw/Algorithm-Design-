//#include<iostream>
//#include<vector>
//using namespace std;
//const int N = 50001;
//int dp[N][2];	//dp[i][0]代表第i个节点涂成了黑色,以其为根节点的子树的最大黑色节点数; dp[i][1]代表涂成了白色……
//int ifp[N];
//vector<int>* child;
//
//int solve(int root) {
//	dp[root][0] = 1; //初始条件
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
//		// 初始化邻接表，注意节点编号是从1开始的
//		child = new vector<int>[n + 1];
//		for (int i = 0; i < N; i++) {
//			ifp[i] = 0;
//		}
//		for (int i = 0; i < n-1; i++) {//n-1对结点
//			int u, v;
//			cin >> u >> v;
//			child[u].push_back(v);
//			ifp[v] = 1; //v有父节点u；
//
//
//		}
//		int root = 0;
//		for (int i = 1; i <= n; i++) { //结点编号从1开始
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