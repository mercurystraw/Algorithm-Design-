//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//const int N = 301;
//int d[N];//��¼ÿ��������� 
//vector<int>v[N];	//��ͼ �ڽӱ�
//int cur, ans[N];//��ǰ���ָ�򼰴�����
//
//int n, m; //�ڵ��� ����
//void topu() {
//	queue<int>q;
//	for (int i = 1; i <= n; i++) { //n����� �±�1-n
//		if (d[i] == 0) {
//			q.push(i);
//		}
//	}
//	while (!q.empty()) {
//		int f = q.front();
//		ans[cur++] = f;
//		q.pop();
//		for (int i = 0; i < v[f].size(); i++) {
//			int k = v[f][i];	//ɾȥ����ɾȥ����߲��ҽ����Ϊ0�Ľ�������� ��ʾ����ѡ���������
//			d[k]--;
//			if (d[k] == 0)
//				q.push(k);
//		}
//	}
//}
//int main() {
//	int t; cin >> t;
//	
//	while (t--) {
//		cin >> n >> m;
//		if (n <=0|| m == 0) {  //һЩ�߽���������
//			cout << "0" << endl; 
//			continue;
//		}
//		//ÿ��ѭ����Ҫ��ʼ����
//		cur = 0;
//		for (int i = 1; i <= n; i++) {
//			d[i] = 0;	//������
//			v[i].clear();//�ڽӱ����
//		}
//		//��������
//		for (int i = 0; i < m; i++) {
//			int x, y;
//			cin >> x >> y;
//			v[x].push_back(y);	
//			d[y]++;
//		}
//		topu();
//		
//		if (cur != n ) { //���curû�е�n����ʾû�б���n����� ˵���޿��з������л��� 
//			cout << "0" << endl;
//		}
//		else {
//			for (int i = 0; i < cur; i++)cout << ans[i] << " ";
//			cout << endl;
//		}
//
//	}
//	return 0;
//}
