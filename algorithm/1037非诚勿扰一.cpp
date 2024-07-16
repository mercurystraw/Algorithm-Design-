//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//const int MAXN = 55; // ���α���
//const int MAXM = 12; // �������Ů�α���
//int match[MAXN]; // ��¼ÿλ�мα�ƥ���Ů�α�����ʼ��Ϊ0��ʾδƥ��
//bool visited[MAXM]; // ��¼ÿλŮ�α��Ƿ��Ѿ���ƥ��
//
//vector<int> graph[MAXN]; // �洢ͼ���ڽӱ�
//
////�������㷨
//bool dfs(int u) {
//    for (int v : graph[u]) { //�����мα�u�����Ů�α����
//        if (!visited[v]) {
//            visited[v] = true;
//            if (match[v] == 0 || dfs(match[v])) { //���Ů�α� v �Ѿ���ĳ�мα� u ƥ�䣬��������᳢���ڵ�ǰƥ���ϵ��мα� u ���ϵݹ������һ��ƥ�䣬Ȼ���ó�Ův
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
//            graph[i].clear(); // ����ڽӱ�
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
//runtime error�� ����Ӧ���ǲ�����vector


//����AC��
//#include<iostream>
//using namespace std;
//const int N = 51;
//bool match[N][N]; //match[i][j]��ʾ����i����Ů��j
//bool used[N];//��¼Ů�α��Ƿ�ƥ���
//int girl[N];//��¼Ů��ƥ���е��������
//
//int n, m, k;
//
//bool find(int x) {  //�ж�����x�Ƿ��ҵõ�ƥ������
//	int i, j;
//	for (j = 1; j <= m; j++) {    //ɨ��ÿ������
//		if (match[x][j] == true && used[j] == false)
//		{
//			used[j] = 1;
//			if (girl[j] == 0 || find(girl[j])) {
//				//������������Ů��jƥ�䵽������girl[j]���ڳ���λ����������ʹ�õݹ�
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
//				used[j] = 0;  //ÿλ������ʼƥ�䶼Ҫ���³�ʼ�� ��ΪŮ����û���ù���
//			}
//			if (find(i))ans++;
//		}
//		cout << ans << endl;
//	}
//	return 0;
//}
