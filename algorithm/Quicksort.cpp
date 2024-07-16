/*#include <stdio.h>
int res[1000] = { 0 };
int a[1000] = { 0 };
int n;
int quicksort(int low, int high, int depth) {
    if (low >= high) {
        return 0;
    }
    if (low + 1 == high) {
        if (a[low] > a[high]) {
            int temp = a[low];
            a[low] = a[high];
            a[high] = a[low];
        }
        return 0;
    }
    int p = low;
    for (int i = low; i <= high; i++) {
        if (a[low] > a[i]) {
            p++;
            int temp = a[p];
            a[p] = a[i];
            a[i] = temp;
        }
    }
    int temp = a[low];
    a[low] = a[p];
    a[p] = temp;

    if (depth == 1) {
        res[p] = a[p];
    }
    if (depth == 2) {
        for (int i = low; i <= high; i++) {
            res[i] = a[i];
        }
    }

    quicksort(low, p - 1, depth + 1);
    quicksort(p + 1, high, depth + 1);

    return 0;
}

int solve() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    quicksort(0, n - 1, 1);

    for (int i = 0; i < n; i++) {
        printf("%d ", res[i]);
    }
    printf("\n");
    /*
    for(int i=0; i<n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}

int main() {
    int m;
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        solve();
    }
    return 0;
}*/