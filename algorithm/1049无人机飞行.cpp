//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<climits>
//using namespace std;
//int n;		//传感器数量
//double D;		//终点距离，起点为0
//const int N = 151;
//double totalenergy;
//int vchange;	//速度变化次数
//vector<double> v_m;   //保存速度的数组
//vector<int>x_m; //记录在哪个地方改变了速度
//int sensorstart; //记录范围起点
//int sensorend;	//记录范围终点
//double v_nosensor; //无传感器下的速度
//struct Sensor {
//	double l, r, t;	//传感器的左右区间及无人机采集该传感器数据所需要的时间
//
//	double nec_v = (r - l) *1.0/ t;
//
//	bool operator < (const Sensor& a) const{
//		if (l == a.l)return r < a.r;
//		return l < a.l;  //按照区间的左端点排序
//	}
//}sensor[N];
//
//double p(double v) { //功率函数
//	return 0.07 * v * v * v + 0.0391 * v * v - 13.196 * v + 390.95;
//}
//
//double P(double v) { //此P=p(v)/v 用于p(v)*路程/v 求无传感器时的最小消耗能量
//	return 0.07 * v * v + 0.0391 * v - 13.196 + 390.95 / v;
//}
//
//double P_prime(double v) { //求导
//	return 0.14 * v + 0.0391 - 390.95 / (v * v);
//}
//void findMinimizeValue() {  //找到消耗能量最小值
//	double v = 1.0; // 初始速度估计值
//	double epsilon = 0.0001; // 迭代精度
//
//	while (abs(P_prime(v)) > epsilon) {
//		v = v - P_prime(v) / (0.14 + 390.95 / (v * v)); // 使用牛顿法迭代
//	}
//	v_nosensor = v;
//}
////P(v_nosensor)为无传感器下消耗的能量
//
////void calscale() { //计算传感器范围的起点和终点
////	//sort(sensor, sensor + n); solve函数中已经排过序了。
////	sensorstart = sensor[0].l;
////	sensorend = sensor[0].r;
////	if (n > 1) {
////		for (int i = 1; i < n; i++) {
////			if (sensor[i].r > sensorend)sensorend = sensor[i].r;
////		}
////	}
////}
//bool inscale(double x) {		//判断无人机是否在传感器的最小和最大范围
//	for (int i = 0; i < n; i++) {
//		if (x >= sensor[i].l && x <= sensor[i].r)return true;
//	}
//	return false;
//}
//
//void solve() {
//	vchange = 1;
//	v_m.clear();
//	x_m.clear();
//	totalenergy = 0;
//	sort(sensor, sensor + n);
//	findMinimizeValue();
//	if (sensor[0].l > 0) {
//		int start = 0;
//		int end = sensor[0].r;
//		totalenergy += P(v_nosensor) * (end - start);
//		x_m.push_back(sensor[0].r);
//		v_m.push_back(v_nosensor);
//	}
//	else {
//		for (int i = 0; i < n-1; i++) {
//			for (int j = sensor[0].l; j <= sensor[n-1].r; j++) {
//				if(inscale(j)){
//					if (sensor[i + 1].r > sensor[i].r) {
//						int x = sensor[i + 1].r - sensor[i].l;
//						double v_ = x / (sensor[i].t + sensor[i + 1].t);
//						totalenergy += P(v_) * x;
//					}
//					else {
//						int x = sensor[i].r - sensor[i].l - (sensor[i + 1].r - sensor[i].l;
//						double v1 = x/sensor[i].t;
//						totalenergy += P(v1) * x + P(sensor[i + 1].nec_v) * (sensor[i + 1].r - sensor[i].l);
//						x_m.push_back(sensor[i + 1].l);
//						x_m.push_back(sensor[i + 1].r);
//						v_m.push_back(v1);
//						v_m.push_back(sensor[i].nec_v);
//						v_m.push_back(v1);
//						vchange += 2;
//					}
//				}
//				else if (!inscale(j)) {
//					vchange++;
//					x_m.push_back(j);
//					v_m.push_back(v_nosensor);
//				}
//			}
//		}
//	}
//	x_m.push_back(D);
//
//	cout << vchange << endl;
//	for (int i = 0; i < x_m.size(); i++)cout << x_m[i] << " ";
//	cout << endl;
//	for (int i = 0;i < v_m.size(); i++)cout << v_m[i] << " ";
//
//	//sort(sensor, sensor + n);
//	//vector<double>dp(D + 1,1e9);
//	//dp[0] = 0;
//	//for (int i = 1; i <= D; ++i) {
//	//	if (!inscale) {
//	//		//
//	//	}
//	//	for (int j = 0; j < n; ++j) {
//	//		if (i >= sensor[j].l) {
//	//			double tmp = dp[sensor[j].l] + p(sensor[j].nec_v) * sensor[j].t;
//	//			dp[i] = min(dp[i], tmp);
//	//		}
//	//	}
//
//	//}
//}
//int main() {
//	int T; cin >> T;
//	while (T--) {
//		cin >> n;//传感器数量
//		cin >> D;
//		
//		for (int i = 0; i < n; i++) {
//			cin >> sensor[i].l >> sensor[i].r >> sensor[i].t;
//		}
//		solve();
//	}
//	return 0;
//}