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

int tests;
int N;
int memo  [50005];
int x [50005];
bool v [50005];

int dfs (int i) {
    if (v [i] == 1)    return 0;
    v [i] = 1;
    if (x [i] == -1)    return 0;
    int ans = 1;
    ans += dfs (x [i]);
    v [i] = 0;
    return memo [i] = ans;
}
int main(int argc, char** argv) {
    freopen ("in", "r", stdin);
    cin >> tests;
    for (int tc = 1; tc <= tests; tc ++) {
        FILL (memo, -1);
        FILL (x, -1);
        FILL (v, 0);
        cin >> N;
        for (int i = 0; i < N; i ++) {
            int tmp;
            scanf ("%d", &tmp);
            scanf ("%d", x + tmp);
        }
        int idx = -1, ans = -1;
        for (int i = 1; i <= N; i ++) {
            if (memo [i] != -1)    continue;
            int tmp = dfs (i);
            if (tmp > ans) {
                idx = i;
                ans = tmp;
            }
        }
        printf ("Case %d: %d\n", tc, idx);
    }
    return 0;
}

