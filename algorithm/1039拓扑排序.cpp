//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//const int N = 301;
//int d[N];//记录每个结点的入度 
//vector<int>v[N];	//存图 邻接表
//int cur, ans[N];//当前光标指向及答案数组
//
//int n, m; //节点数 边数
//void topu() {
//	queue<int>q;
//	for (int i = 1; i <= n; i++) { //n个结点 下标1-n
//		if (d[i] == 0) {
//			q.push(i);
//		}
//	}
//	while (!q.empty()) {
//		int f = q.front();
//		ans[cur++] = f;
//		q.pop();
//		for (int i = 0; i < v[f].size(); i++) {
//			int k = v[f][i];	//删去结点后删去有向边并且将入度为0的结点插入队列 表示可以选择进行拓扑
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
//		if (n <=0|| m == 0) {  //一些边界条件处理
//			cout << "0" << endl; 
//			continue;
//		}
//		//每次循环都要初始化；
//		cur = 0;
//		for (int i = 1; i <= n; i++) {
//			d[i] = 0;	//入度清空
//			v[i].clear();//邻接表清空
//		}
//		//读入数据
//		for (int i = 0; i < m; i++) {
//			int x, y;
//			cin >> x >> y;
//			v[x].push_back(y);	
//			d[y]++;
//		}
//		topu();
//		
//		if (cur != n ) { //如果cur没有到n，表示没有遍历n个结点 说明无可行方案（有环） 
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
