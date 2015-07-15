/* 
 * File:   main.cpp
 * Author: zelengzhuang 
 */
#include <iostream>
#include <stdlib.h>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <sstream>
#include <complex>
#include <ctime>
#include <cassert>
#include <functional>
#include <algorithm>
using namespace std;

typedef long long ll;
#define REP(i,s,t) for(int i=(s);i<(t);i++)
typedef pair<int, int> PII;
typedef pair<ll, ll> PLL;
const int INF = (int)1E9;
#define MAXN 600005
#define vv vector<int>
#define FILL(x,v) memset(x,v,sizeof(x))

bool isOk (int n, int p) {
    for (int i = 0; i < p; i ++) {
        if (n % p != 1)    return false;
        n -= (n / p + 1);
    }
    return (n % p) == 0;
}

int main () {
    int fuck;
    while (scanf ("%d", &fuck), (fuck != -1)) {
        int ans = -1;
        for (int i = 1; i < (int) sqrt (fuck) + 2; i ++)
            if (isOk (fuck, i))
                ans = i;
        if (ans == -1) {
            printf("%d coconuts, no solution\n",fuck);
        } else {
            printf("%d coconuts, %d people and 1 monkey\n",fuck,ans);
        }
    }
    return 0;
}
