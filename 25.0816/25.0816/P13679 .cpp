#define _CRT_SECURE_NO_WARNINGS
#define MOD 998244353
#define ll long long
#include<stdio.h>
int main() {
	ll n,cnt,sum,sum1;
	scanf("%lld", &n);
	cnt = n / MOD;
	sum = cnt * (cnt-1) / 2 * MOD + (n-cnt*MOD+1)*cnt;
	sum1 = (n - cnt * MOD + 1) * cnt;
	printf("%lld",sum1%MOD);
	return 0;
}
