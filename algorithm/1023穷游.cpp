//#include <iostream>
//#include <queue>
//#include <vector>
//#include <cstring>
//using namespace std;
//
//#define INF 0x3f3f3f3f
//
//struct Edge {
//    int to, cost;
//};
//
//int T, n, E, s, t, M;
//vector<Edge> adj[501];
//int B[501], dist[501][101];
//bool visited[501];
//
//void init() {
//    memset(B, 0, sizeof(B));
//    for (int i = 0; i <= n; ++i) {
//        adj[i].clear();
//    }
//    memset(visited, false, sizeof(visited));
//    for (int j = 0; j <= n; ++j)
//        for (int k = 0; k <= M; ++k)
//            dist[j][k] = INF;
//    dist[s][0] = 0;
//}
//
//void spfa() {
//    queue<int> q;
//    q.push(s);
//    visited[s] = true;
//
//    while (!q.empty()) {
//        int u = q.front();
//        q.pop();
//        visited[u] = false;
//
//        for (const auto& edge : adj[u]) {
//            int v = edge.to, w = edge.cost;
//            for (int k = B[v]; k <= M; ++k) {
//                if (dist[u][k - B[v]] + w < dist[v][k]) {
//                    dist[v][k] = dist[u][k - B[v]] + w;
//                    if (!visited[v]) {
//                        q.push(v);
//                        visited[v] = true;
//                    }
//                }
//            }
//        }
//    }
//}
//
//int main() {
//    cin >> T;
//    while (T--) {
//        cin >> n >> E >> s >> t >> M;
//        init();
//
//        for (int i = 1; i <= n; ++i) {
//            cin >> B[i];
//        }
//        B[s] = 0;  // 小A是s国人，因此s国不会收取过路费
//
//        for (int i = 0; i < E; ++i) {
//            int u, v, cost;
//            cin >> u >> v >> cost;
//            adj[u].push_back({ v, cost });
//            adj[v].push_back({ u, cost });
//        }
//
//        spfa();
//
//        int res = INF;
//        for (int k = 0; k <= M; ++k) {
//            if (dist[t][k] < res) {
//                res = dist[t][k];
//            }
//        }
//
//        if (res != INF) {
//            cout << res << endl;
//        }
//        else {
//            cout << -1 << endl;
//        }
//    }
//    return 0;
//}
//
