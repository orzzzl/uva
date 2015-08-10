/*************************************************************************
	> File Name: 642.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Mon Aug 10 03:42:18 2015
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
#define MAXN 600005
#define vv vector<int>
#define FILL(x,v) memset(x,v,sizeof(x))


int main () {
    int n, num;
    while (scanf ("%d %d", &n, &num) == 2) {
        int x [num];
        for (int i = 0; i < num; i ++) {
            scanf ("%d", x + i);
        }
        int best = -1;
        vector <int> recBest, rec;
        rec = {};
        recBest = {};
        for (int i = 0; i < (1 << 20); i ++) {
            int tota = 0;
            bool ok = 1;
            rec.clear ();
            for (int j = 0; j < num; j ++) {
                if ((1 << j) & i) {
                    tota += x [j];
                    rec.push_back (x [j]);
                    if (tota > n) {
                        ok = 0;
                        break;
                    }
                }
            }
            if (!ok) {
                continue;
            }
            if (tota > best || (tota == best && recBest.size() < rec.size())) {
                best = tota;
                recBest = rec;
            }
        }
        for (int i = 0; i < recBest.size(); i ++) {
            printf ("%d ", recBest [i]);
        }
        printf ("sum:%d\n", best);
    }
    return (0);
}
