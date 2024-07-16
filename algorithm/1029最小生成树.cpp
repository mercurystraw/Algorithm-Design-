//#include <iostream>
//#include <vector>
//#include <climits>
//using namespace std;
//
//const int MAXN = 505;
//const int INF = INT_MAX;
//
//vector<pair<int, int>> graph[MAXN]; //存图
//vector<bool> visited(MAXN, false);
//vector<int> dist(MAXN, INF);  //dist[i]表示到节点i的距离（权重）
//
//int prim(int n) {
//    dist[1] = 0; // Start from vertex 1
//    int totalWeight = 0;
//
//    for (int i = 1; i <= n; ++i) {  //每次找一个顶点加入
//        int u = -1;
//        for (int j = 1; j <= n; ++j) {
//            if (!visited[j] && (u == -1 || dist[j] < dist[u])) {
//                u = j;
//            }
//        }
//        //以上为找到与当前树距离（权重）最小的节点u
//        if (dist[u] == INF) {
//            return -1; // Cannot build a minimum spanning tree
//        }
//
//        visited[u] = true;
//        totalWeight += dist[u];
//        //更新权重
//        for (const auto& edge : graph[u]) {
//            int v = edge.first;
//            int weight = edge.second;
//            if (!visited[v] && weight < dist[v]) {
//                dist[v] = weight;
//            }
//        }
//    }
//
//    return totalWeight;
//}
//
//int main() {
//    int T;
//    cin >> T;
//
//    while (T--) {
//        int n, E;
//        cin >> n >> E;
//        //初始化
//        for (int i = 1; i <= n; ++i) {
//            graph[i].clear();
//            visited[i] = false;
//            dist[i] = INF;
//        }
//
//        for (int i = 0; i < E; ++i) {
//            int u, v, w;
//            cin >> u >> v >> w;
//            graph[u].push_back(make_pair(v, w));
//            graph[v].push_back(make_pair(u, w));
//        }
//
//        int result = prim(n);
//        cout << result << endl;
//    }
//
//    return 0;
//}
