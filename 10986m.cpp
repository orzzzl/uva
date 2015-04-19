/*************************************************************************
	> File Name: 10986m.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Sat Apr 18 20:40:09 2015
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

int dis [20005];
vector < PII > gra [50005];

int findis (int s, int e) {
    queue <PII> q;
    dis [s] = 0;
    PII ps = make_pair (s, 0);
    q.push (ps);
    while (!q.empty ()) {
        PII tmp = q.front ();
        q.pop ();
        for (int i = 0; i < gra [tmp.first].size (); i++ ) {
            PII tt = gra [tmp.first][i];
            if (dis [tt.first] > dis [tmp.first] + tt.second)
            {
                dis [tt.first] = dis [tmp.first] + tt.second;
                q.push (make_pair (tt.first, dis [tt.first]));
            }
        }
    }
    return dis [e];
}

int main () {
    int tests;
    cin >> tests;
    REP (testnum, 1, tests + 1) {
        int n, m, s, t, a, b, w;
        cin >> n >> m >> s >> t;
        REP (i, 0, n) dis [i] = INF;
        REP (i, 0, n) gra [i].clear ();
        REP (i, 0, m) {
            cin >> a >> b >> w;
            gra [a].push_back (make_pair (b, w));
            gra [b].push_back (make_pair (a, w));

        }
        int res = findis (s, t);
        if (res == INF)
            cout << "Case #" << testnum << ": unreachable\n";
        else
            cout << "Case #" << testnum << ": " << res << endl;
    }
    return (0);
}
