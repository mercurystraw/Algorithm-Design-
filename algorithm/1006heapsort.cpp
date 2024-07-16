/*#include<iostream>
using namespace std;
const int N = 1001;
int n, m;
int h[N];

void down(int u) {
	int t = u;
	if (u * 2 <= n && h[u * 2] < h[t])t = u * 2;
	if (u * 2 + 1 <= n && h[u * 2 + 1] < h[t])t = u * 2 + 1;
	if (u != t) {
		swap(h[u], h[t]);
		down(t);
	}
}
void heapify(int size) {
	for (int i = size / 2; i >= 1; i--) {
		down(i);
	}
}
int main() {
	int c; cin >> c;
	
	for (int k = 0; k < c; k++) {
		cin >> n;
		int size = n;
		for (int i = 1; i <= n; i++)
			cin >> h[i];
		heapify(size);
		
		for (int i = 1; i <= n; i++)cout << h[i] << " ";
		cout << endl;
	}
	return 0;
}*/