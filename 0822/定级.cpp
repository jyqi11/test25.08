#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    int n, m, q, x, y, cnt = 0;
    scanf("%d %d %d", &n, &m, &q);
    int arr[n + 1][m + 1], b[n + 1][m + 1];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++)
            scanf("%d", &arr[i][j]);
    }
    while (q--) {
        cnt = 0;
        scanf("%d %d", &x, &y);
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++)
                b[i][j] = 0;
        }
        int x1 = x, y1 = y;
        int flag = 0;
        while (1) {
            if (x1 == 0 || x1 > n || y1 == 0 || y1 > m)
                break;
            if (b[x1][y1] == 1) {
                flag = 1;
                break;
            }
            b[x1][y1] = 1;
            if (arr[x1][y1] == 1) x1 -= 1;
            else if (arr[x1][y1] == 2) x1 += 1;
            else if (arr[x1][y1] == 3) y1 -= 1;
            else if (arr[x1][y1] == 4) y1 += 1;
            cnt++;
        }
        if (flag == 1) printf("-1\n");
        else printf("%d\n", cnt);
    }
    return 0;
}