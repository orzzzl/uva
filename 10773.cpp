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

int main () {
    freopen ("in", "r", stdin);
    scanf ("%d", &tests);
    for (int tn = 1; tn <= tests; tn ++) {
        double d, v, u;
        scanf ("%lf %lf %lf", &d, &v, &u);
        if (u <= v) {
            printf ("Case %d: can't determine\n", tn);
            continue;
        } else {
            double ans = abs (d / u - d / (sqrt (u * u - v * v)));
            if (ans == 0)     printf ("Case %d: can't determine\n", tn);
            else printf ("Case %d: %.3f\n",tn, ans);
        }
    }
    return 0;
}
