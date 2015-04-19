/*************************************************************************
	> File Name: 100.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Sat Apr 18 14:00:31 2015
 ************************************************************************/

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
#define MAXN 1000005
#define vv vector<int>
#define FILL(x,v) memset(x,v,sizeof(x))


int main () {
    ll ii, jj;
    ll x [MAXN];
    FILL (x, -1);
    x [1] = 1;
    while (scanf ("%lld%lld", &ii, &jj) != EOF) {
        cout << ii << " " << jj << " ";
        ll max = -1;
        ll tmp;
        if (jj < ii)
        {
            tmp = ii;
            ii = jj;
            jj = tmp;
        }
        REP (kk, ii, jj + 1) {
            ll tt = 0;
            ll k = kk;
            while (1){
                tt ++;
                if (k == 1) break;
                if (k % 2 == 0) 
                    k /= 2;
                else
                    k = k * 3 + 1;
               // cout << k << endl;
                if (k < MAXN && x [k] != -1) {
                    tt += x [k];
                    break;
                }
            }
            if (tt >= max)
                max = tt;
            x [kk] = tt;
        }
        cout << max << endl;
    }
    return (0);
}
