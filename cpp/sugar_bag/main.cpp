#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
#define INFTY 0x3f3f3f3f

using namespace std;

int dp[5002];

int main(void){
    //int n = 5000;
    int n = 50;
    //scanf("%d", &n);
    memset(dp, 0x3f, sizeof(dp));
    // dp[n] -> 설탕이 n일때 담을 수 있는 최소 봉지의 수

    dp[3] = 1;
    dp[5] = 1;

    for(int i = 6 ; i <= n; i++) {
        dp[i] = min(dp[i-3], dp[i-5]) + 1;
        if (dp[i] >= INFTY)
            dp[i] = INFTY;
    }

    //printf("%d", (dp[n] >= INFTY) ? -1 : dp[n]);
    for (int i = 0; i <= n; ++i) {
        printf("i = %d: %d\n",i, dp[i]);
    }
}
