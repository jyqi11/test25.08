#define _CRT_SECURE_NO_WARNINGS
/*#include<stdio.h>
#define ll long long
int main() {
    int n, t, i, cnt1 = 0, cnt2 = 0, ans = 0;
    ll k, sx, sy, tx, ty, tmp;
    scanf("%d", &n);
    ll a[n], b[n];
    for (i = 0; i < n; i++) {
        scanf("%d %lld", &t, &k);
        if (t == 1) a[cnt1++] = k;
        else b[cnt2++] = k;
    }
    scanf("%lld %lld %lld %lld", &sx, &sy, &tx, &ty);
    if (sx < tx) {
        tmp = sx;
        sx = tx;
        tx = tmp;
    }
    if (sy < ty) {
        tmp = sy;
        sy = ty;
        ty = tmp;
    }
    for (i = 0; i < cnt1; i++) {
        if (a[i] >= tx && a[i] <= sx) ans++;
    }
    for (i = 0; i < cnt2; i++) {
        if (b[i] >= ty && b[i] <= sy) ans++;
    }
    printf("%d", ans);
    return 0;
}*/

#include<stdio.h>
#define ll long long
int calV(int arr[], int n) {
    int sum = 0, v = 0;
    for (int i = 0; i < n; i++) {
        sum = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] < arr[j] && j < i) sum++;
            if (arr[i] > arr[j] && j > i) sum++;
        }
        v += (sum % 2);
    }
    return v;
}
int main() {
    int T, n, i;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        int arr[100], cnt = 0, v = 0;
        for (i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        int ans = calV(arr, n);

        int now, now1, then = 0, last = 0;
        for (i = 0; i < n; i++) {
            now = i;
            now1 = arr[i];
            then = 0;
            int b[100];
            for (int j = 0; j < n; j++) {
                if (i != j) b[then++] = arr[i];
            }
            for (int k = 0; k < n; k++) {
                if (now == k) continue;
                last = 0;
                int c[100];
                for (int k1 = 0; k1 < k; k1++)
                    c[last++] = b[k1];
                c[last++] = now1;
                for (int k2 = k; k2 < n - 1; k2++)
                    c[last++] = b[k2];
                int v1 = calV(c, n);
                if (v1 > v) v = v1;
            }
        }
        printf("%d\n", v);
    }
    return 0;
}