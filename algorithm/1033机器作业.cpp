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
    if (a.profit != b.profit)return a.profit > b.profit;  //��������ͽ�ֹʱ�������������ȼ�>ʱ�䣩
    return a.deadline < b.deadline;
}
void solve() {
    for (int i = 0; i < N; i++) {
        isfull[i] = 0;
    }
    sort(job, job + n, cmp);
    long long res = 0;
    for (int i = 0; i < n; i++) {           //�����ź�������� ��ÿ��deadlineǰ��һ��ʱ�䵥λ�ָ����� ͬdeadline�Ļ���������ͼ���ʹ��ǰ���ʱ�䵥λ
        for (long long k = job[i].deadline; k > 0; k--) {  
            if (!isfull[k]) {
                isfull[k] = 1;
                res += job[i].profit;
                break;          //һ����ǰ��ҵ�õ�ʱ�������������ѭ�� �����һֱ����
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
//AC�� ƽ̨�����Ż��ˡ�֮ǰ��runtime error

/*#include <iostream>
#include <algorithm>
#include <queue>                    //���ȶ��л���runtime error��
using namespace std;

const int N = 50010;

struct Job {
    long long deadline, profit;

    bool operator<(const Job& other) const {
        return profit < other.profit;  // ��������Ӵ�С����
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

    bool* isfull = new bool[max_deadline + 1](); // ��������ֹʱ�䶯̬��������ռ�
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

    delete[] isfull; // �ͷŶ�̬������ڴ�
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








