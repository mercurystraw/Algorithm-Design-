//#include<iostream>
//#include <cstring>
//using namespace std;
//
//const int INF=0x3f3f3f3f;
//const int N = 501, M = 10010;
//
//int n, m, s, t;
//int h[N], e[M], w[M],ne[M], idx; //邻接表存储图
//
//int dist[N]; // dist[i] 表示起点到 i 的最短距离
//bool st[N]; // st[i] 表示 i 是否已经确定了最短路
//
//void add(int a, int b,int c) {
//	e[idx] = b; ne[idx] = h[a]; w[idx] = c; h[a] = idx++;
//	}
//
//int dijkstra() {
//	for (int i = 0; i < N; i++) {
//		dist[i] = INF; st[i] = 0;
//	}
//
//	dist[s] = 0;  //起点距离为0
//
//	for (int i = 0; i < n; i++) {// 迭代 n 次，每次确定一个最短路
//		int t = -1;
//		for (int j = 1; j <= n; j++) {  //对1-n的结点进行遍历
//			if (!st[j] && (t == -1 || dist[j] < dist[t])) {
//				t = j;
//			}  
//		} //等循环结束找到离起点最近的
//		if (t == -1) break; // 如果没有找到可达节点，跳出循环
//		st[t] = true;
//		for (int j = h[t]; j!=-1; j = ne[j]) { //邻接表内，都是与t相连的结点 更新距离  //j>=0是因为表头初始化为-1了，所以结束时肯定是表头为负数了
//			int k = e[j];
//			if (!st[k]&&dist[k] > dist[t] + w[j])
//				dist[k] = dist[t] + w[j];	
//		}
//	}
//	if (dist[t] != INF) return dist[t]; 
//	else return -1;
//}
//
//int main() {
//	int T;
//	cin >> T;
//	while (T--) {
//		cin >> n >> m >> s >> t;
//		for (int i = 0; i <=n; i++)h[i] = -1;
//		idx = 0;
//		for (int i = 0; i < m; i++) {
//			int a, b, c;
//			cin >> a >> b >> c;
//			add(a, b, c);
//			add(b, a, c);
//		}
//		cout << dijkstra() << endl;
//
//	}
//	return 0;
//
//}
//不知道为啥runtime error了

//#include<iostream>
//using namespace std;
//#define INF 0x3f3f3f3f
//
//const int N = 501;
//int w[N][N];
//bool ss[N];
//
//void shortestPath(int n, int s, int* dist)//共n个顶点，求从s到t的最短路径
//{
//	for (int i = 1; i <= n; i++)
//	{
//		dist[i] = w[s][i];
//		ss[i] = false;
//	}
//	ss[s] = true;
//	dist[s] = 0;
//	for (int i = 1; i < n; i++)		//除去s还有n-1个国家
//	{
//		int u = s;
//		int min = INF;
//		for (int j = 1; j <= n; j++)	//选最小路径
//			if (ss[j] == false && dist[j] < min)
//			{
//				u = j;
//				min = dist[j];
//			}
//		ss[u] = true;//选出距离最近的顶点
//		//更新dist值，以新加入的u节点为起点加入新距离
//		for (int k = 1; k <= n; k++)
//			if (ss[k] == false && w[u][k] + dist[u] < dist[k])
//				dist[k] = w[u][k] + dist[u];
//	}
//}
//
//
//int main()
//{
//	int T, n, E, s, t, u = 0, v = 0;
//	cin >> T;
//	while(T--)
//	{
//		cin >> n >> E >> s >> t;
//		//表示顶点数、边数、顶点s以及顶点t
//		int* dist = new int[n];
//		for (int j = 0; j < 501; j++)
//			for (int k = 0; k < 501; k++)
//				w[j][k] = INF;    //顶点j到k的距离
//		for (int j = 1; j <= E; j++)
//		{
//			int x;
//			cin >> u >> v >> x;
//			if (x < w[u][v]) {
//				w[u][v] = x;
//				w[v][u] = x;
//			}//有重边时选路短的保留
//		}
//		shortestPath(n, s, dist);
//		if (dist[t] != INF)	//有最短路径
//			cout << dist[t] << endl;
//		else cout << -1 << endl;
//	}
//	return 0;
//}
