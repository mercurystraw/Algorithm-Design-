/*#include <iostream>
#include <algorithm>
using namespace std;
const int N = 50010;
struct Job {
	long long deadline, profit;

}job[N];
int n;
bool isfull[N];

int cmp(Job a, Job b) {
    if (a.profit != b.profit)return a.profit > b.profit;  //按照利润和截止时间排序（利润优先级>时间）
    return a.deadline < b.deadline;
}
void solve() {
    for (int i = 0; i < N; i++) {
        isfull[i] = 0;
    }
    sort(job, job + n, cmp);
    long long res = 0;
    for (int i = 0; i < n; i++) {           //对于排好序的数组 将每个deadline前的一个时间单位分给数组 同deadline的话如果不够就继续使用前面的时间单位
        for (long long k = job[i].deadline; k > 0; k--) {  
            if (!isfull[k]) {
                isfull[k] = 1;
                res += job[i].profit;
                break;          //一旦当前作业得到时间分配马上跳出循环 否则会一直分配
            }
        }
    }
    cout << res << endl;

}
int main() {
    int m;
    cin >> m;
    while (m--) {
        cin >> n;
        if (n <= 0) {
            cout << "0" << endl;
            continue;
        }
        for (int i = 0; i < n; i++) {
            cin >> job[i].deadline >> job[i].profit;
        }

        solve();
    }
    return 0;
}*/
//AC了 平台可能优化了。之前是runtime error

/*#include <iostream>
#include <algorithm>
#include <queue>                    //优先队列还是runtime error。
using namespace std;

const int N = 50010;

struct Job {
    long long deadline, profit;

    bool operator<(const Job& other) const {
        return profit < other.profit;  // 按照利润从大到小排序
    }
} job[N];

int n;

void solve() {
    priority_queue<Job> pq;
    long long res = 0;
    for (int i = 0; i < n; i++) {
        pq.push(job[i]);
    }

    long long max_deadline = 0;
    for (int i = 0; i < n; i++) {
        max_deadline = max(max_deadline, job[i].deadline);
    }

    bool* isfull = new bool[max_deadline + 1](); // 根据最大截止时间动态分配数组空间
    while (!pq.empty()) {
        Job cur = pq.top(); pq.pop();
        for (long long k = cur.deadline; k > 0; k--) {
            if (!isfull[k]) {
                isfull[k] = true;
                res += cur.profit;
                break;
            }
        }
    }
    cout << res << endl;

    delete[] isfull; // 释放动态分配的内存
}

int main() {
    int m;
    cin >> m;
    while (m--) {
        cin >> n;
        if (n <= 0) {
            cout << "0" << endl;
            continue;
        }
        for (int i = 0; i < n; i++) {
            cin >> job[i].deadline >> job[i].profit;
        }
        solve();

    }
    return 0;
}*/








