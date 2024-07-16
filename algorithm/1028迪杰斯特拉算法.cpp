//#include<iostream>
//#include <cstring>
//using namespace std;
//
//const int INF=0x3f3f3f3f;
//const int N = 501, M = 10010;
//
//int n, m, s, t;
//int h[N], e[M], w[M],ne[M], idx; //�ڽӱ�洢ͼ
//
//int dist[N]; // dist[i] ��ʾ��㵽 i ����̾���
//bool st[N]; // st[i] ��ʾ i �Ƿ��Ѿ�ȷ�������·
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
//	dist[s] = 0;  //������Ϊ0
//
//	for (int i = 0; i < n; i++) {// ���� n �Σ�ÿ��ȷ��һ�����·
//		int t = -1;
//		for (int j = 1; j <= n; j++) {  //��1-n�Ľ����б���
//			if (!st[j] && (t == -1 || dist[j] < dist[t])) {
//				t = j;
//			}  
//		} //��ѭ�������ҵ�����������
//		if (t == -1) break; // ���û���ҵ��ɴ�ڵ㣬����ѭ��
//		st[t] = true;
//		for (int j = h[t]; j!=-1; j = ne[j]) { //�ڽӱ��ڣ�������t�����Ľ�� ���¾���  //j>=0����Ϊ��ͷ��ʼ��Ϊ-1�ˣ����Խ���ʱ�϶��Ǳ�ͷΪ������
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
//��֪��Ϊɶruntime error��

//#include<iostream>
//using namespace std;
//#define INF 0x3f3f3f3f
//
//const int N = 501;
//int w[N][N];
//bool ss[N];
//
//void shortestPath(int n, int s, int* dist)//��n�����㣬���s��t�����·��
//{
//	for (int i = 1; i <= n; i++)
//	{
//		dist[i] = w[s][i];
//		ss[i] = false;
//	}
//	ss[s] = true;
//	dist[s] = 0;
//	for (int i = 1; i < n; i++)		//��ȥs����n-1������
//	{
//		int u = s;
//		int min = INF;
//		for (int j = 1; j <= n; j++)	//ѡ��С·��
//			if (ss[j] == false && dist[j] < min)
//			{
//				u = j;
//				min = dist[j];
//			}
//		ss[u] = true;//ѡ����������Ķ���
//		//����distֵ�����¼����u�ڵ�Ϊ�������¾���
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
//		//��ʾ������������������s�Լ�����t
//		int* dist = new int[n];
//		for (int j = 0; j < 501; j++)
//			for (int k = 0; k < 501; k++)
//				w[j][k] = INF;    //����j��k�ľ���
//		for (int j = 1; j <= E; j++)
//		{
//			int x;
//			cin >> u >> v >> x;
//			if (x < w[u][v]) {
//				w[u][v] = x;
//				w[v][u] = x;
//			}//���ر�ʱѡ·�̵ı���
//		}
//		shortestPath(n, s, dist);
//		if (dist[t] != INF)	//�����·��
//			cout << dist[t] << endl;
//		else cout << -1 << endl;
//	}
//	return 0;
//}
