//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//const int MAXN = 55; // 最大嘉宾数
//const int MAXM = 12; // 最大中意女嘉宾数
//int match[MAXN]; // 记录每位男嘉宾匹配的女嘉宾，初始化为0表示未匹配
//bool visited[MAXM]; // 记录每位女嘉宾是否已经被匹配
//
//vector<int> graph[MAXN]; // 存储图的邻接表
//
////匈牙利算法
//bool dfs(int u) {
//    for (int v : graph[u]) { //遍历男嘉宾u中意的女嘉宾编号
//        if (!visited[v]) {
//            visited[v] = true;
//            if (match[v] == 0 || dfs(match[v])) { //如果女嘉宾 v 已经和某男嘉宾 u 匹配，这个条件会尝试在当前匹配上的男嘉宾 u 身上递归查找下一个匹配，然后让出女v
//                match[v] = u;
//                return true;
//            }
//        }
//    }
//    return false;
//}
//
//int maxMatching(int n, int m) {
//    int ans = 0;
//    for (int i = 1; i <= n; ++i) {
//        fill(visited, visited + m + 1, false);
//        if (dfs(i)) {
//            ++ans;
//        }
//    }
//    return ans;
//}
//int main() {
//    int T;
//    cin >> T;
//     int n, m;
//    while (T--) {
//       
//        cin >> n >> m;
//
//        for (int i = 1; i <= n; ++i) {
//            graph[i].clear(); // 清空邻接表
//            int k;
//            cin >> k;
//            while (k--) {
//                int girl;
//                cin >> girl;
//                graph[i].push_back(girl);
//            }
//        }
//
//        cout << maxMatching(n, m) << endl;
//    }
//
//    return 0;
//}
//runtime error了 怀疑应该是不让用vector


//以下AC了
//#include<iostream>
//using namespace std;
//const int N = 51;
//bool match[N][N]; //match[i][j]表示男生i中意女生j
//bool used[N];//记录女嘉宾是否被匹配过
//int girl[N];//记录女孩匹配中的男生编号
//
//int n, m, k;
//
//bool find(int x) {  //判断男生x是否找得到匹配妹子
//	int i, j;
//	for (j = 1; j <= m; j++) {    //扫描每个妹子
//		if (match[x][j] == true && used[j] == false)
//		{
//			used[j] = 1;
//			if (girl[j] == 0 || find(girl[j])) {
//				//名花无主或者女生j匹配到的男生girl[j]能腾出个位置来，这里使用递归
//				girl[j] = x;
//				return true;
//			}
//		}
//	}
//	return false;
//}
//
//int main() {
//	int T; cin >> T;
//	
//	while (T--) {
//		cin >> n >> m;
//		for (int i = 1; i < N; i++) {
//			for (int j = 1; j < N; j++) {
//				match[i][j] = 0;
//				used[j] = 0;
//				girl[j] = 0;
//			}
//		}
//		int ans = 0;
//		int x = 0;
//		for (int i = 1; i <= n; i++) {
//			cin >> k;
//			for (int j = 1; j <= k; j++) {
//				cin >> x; match[i][x] = 1; 
//			}
//		}
//		for (int i = 1; i <= n; i++) {
//			for (int j = 1; j <= m; j++) {
//				used[j] = 0;  //每位男生开始匹配都要重新初始化 因为女生还没被用过。
//			}
//			if (find(i))ans++;
//		}
//		cout << ans << endl;
//	}
//	return 0;
//}
