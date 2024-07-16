//#include <iostream>
//#include <vector>
//#include <climits>
//using namespace std;
//
//const int MAXN = 505;
//const int INF = INT_MAX;
//
//vector<pair<int, int>> graph[MAXN]; //��ͼ
//vector<bool> visited(MAXN, false);
//vector<int> dist(MAXN, INF);  //dist[i]��ʾ���ڵ�i�ľ��루Ȩ�أ�
//
//int prim(int n) {
//    dist[1] = 0; // Start from vertex 1
//    int totalWeight = 0;
//
//    for (int i = 1; i <= n; ++i) {  //ÿ����һ���������
//        int u = -1;
//        for (int j = 1; j <= n; ++j) {
//            if (!visited[j] && (u == -1 || dist[j] < dist[u])) {
//                u = j;
//            }
//        }
//        //����Ϊ�ҵ��뵱ǰ�����루Ȩ�أ���С�Ľڵ�u
//        if (dist[u] == INF) {
//            return -1; // Cannot build a minimum spanning tree
//        }
//
//        visited[u] = true;
//        totalWeight += dist[u];
//        //����Ȩ��
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
//        //��ʼ��
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
