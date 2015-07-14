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

int r, n;

int main () {
    int tn = 0;
    freopen ("in", "r", stdin);
    while (scanf ("%d %d", &r, &n), (r || n)) {
        int ans = (r - 1) / n;
        if (ans > 26) {
            printf ("Case %d: impossible\n", ++tn);
        } else {
            printf ("Case %d: %d\n", ++tn, ans);
        }
    }

    return 0;
}
