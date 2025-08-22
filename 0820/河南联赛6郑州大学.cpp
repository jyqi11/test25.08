#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#define ll long long
int main() {
    int T;
    ll n;
    scanf("%d", &T);
    while (T--) {
        scanf("%lld", &n);
        ll n1 = n, n2 = n, arr[30] = { 0 };
        ll wei = 0, cnt = 0;
        while (n1) {
            wei = n1 % 9;
            arr[cnt++] = wei;
            n1 /= 9;
        }
        for (int i = 0; i < cnt; i++) {
            if (arr[cnt - 1 - i] < 7)  printf("%d", arr[cnt - 1 - i]);
            else  printf("%d", arr[cnt - 1 - i] + 1);
        }
        printf("\n");
    }
    return 0;
}