#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

const int Maxn = 55;
const long long INF = 1e18;

int n, m;
vector<vector<long long>> map(Maxn, vector<long long>(Maxn, -INF));
vector<vector<long long>> a(Maxn, vector<long long>(Maxn));
vector<int> matched(Maxn);
vector<long long> ex(Maxn), ey(Maxn);
vector<long long> slack(Maxn), pre(Maxn);
vector<bool> visy(Maxn);

int cnt = 0;

void match(int u) {
    int x, y = 0, yy = 0;
    long long delta;
    fill(pre.begin(), pre.end(), 0);
    fill(slack.begin(), slack.end(), INF);
    matched[y] = u;

    while (true) {
        x = matched[y];
        delta = INF;
        visy[y] = true;

        for (int i = 1; i <= n; i++) {
            if (visy[i]) continue;
            if (slack[i] > ex[x] + ey[i] - map[x][i]) {
                slack[i] = ex[x] + ey[i] - map[x][i];
                pre[i] = y;
            }
            if (slack[i] < delta) {
                delta = slack[i];
                yy = i;
            }
        }

        for (int i = 0; i <= n; i++) {
            if (visy[i]) {
                ex[matched[i]] -= delta;
                ey[i] += delta;
            }
            else {
                slack[i] -= delta;
            }
        }

        y = yy;
        if (matched[y] == -1) break;
    }

    while (y) {
        matched[y] = matched[pre[y]];
        y = pre[y];
    }
}

long long KM() {
    fill(matched.begin(), matched.end(), -1);
    fill(ex.begin(), ex.end(), 0);
    fill(ey.begin(), ey.end(), 0);

    for (int i = 1; i <= n; i++) {
        fill(visy.begin(), visy.end(), false);
        match(i);
    }

    long long res = 0;
    for (int i = 1; i <= n; i++) {
        if (matched[i] != -1 && map[matched[i]][i] != -INF) {
            cnt++;
            res += map[matched[i]][i];
        }
    }

    return res;
}

int main() {
    int T, k;
    cin >> T;

    for (int t = 0; t < T; t++) {
        cnt = 0;
        cin >> n >> m;

        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                cin >> a[i][j];
            }
        }

        map = vector<vector<long long>>(Maxn, vector<long long>(Maxn, -INF));

        for (int i = 1; i <= n; i++) {
            cin >> k;
            int girl;
            for (int j = 1; j <= k; j++) {
                cin >> girl;
                map[girl][i] = -a[girl][i];
            }
        }

        m = max(m, n);
        n = max(m, n);

        long long ans = -KM();
        cout << cnt << " " << ans << endl;
    }

    return 0;
}


