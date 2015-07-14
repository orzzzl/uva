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
    int tn = 0;
    freopen ("in", "r", stdin);
    scanf ("%d", &tests);
    while (tests --) {
        int n;
        scanf ("%d", &n);
        int x [n];
        for (int i = 0; i < n; i ++)    scanf ("%d", x + i);
        sort (x, x + n);
        printf ("Case %d: %d\n", ++tn, x [n / 2]);        
    }
    return 0;
}
