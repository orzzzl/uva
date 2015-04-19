/*************************************************************************
	> File Name: 10986.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Sat Apr 18 17:07:20 2015
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


struct edge {
    int to;
    int w;
    edge () {}
    edge (int a, int b) : to (a), w (b) {}
};

edge e;
vector <edge> gra [50005];
queue <edge> pq;

int dis [20005];

int dijkstra (int s, int end) {
    int i, u, v, w;
    dis [s] = 0;
    pq.push (edge (s, 0));
    while (!pq.empty ()) {
        e = pq.front ();
        pq.pop ();
        u = e.to;
        for (int i = 0; i < gra [u].size (); i ++) {
            v = gra [u][i].to;
            w = gra [u][i].w;
            if (dis [v] > dis [u] + w)
            {
                dis [v] = dis [u] + w;
                pq.push (edge (v, dis[v]));
            }
        }
    }
    return dis [end];
}

int main () {
    int tests;
    cin >> tests;
    REP (tstn, 1, tests + 1) {
        int n, m, start, end;
        cin >> n >> m >> start >> end;
        REP (i, 0, n) dis [i] = INF;
        REP (i, 0, n) gra[i].clear ();
        REP (i, 0, m) {
            int a, b, w;
            cin >> a >> b >> w;

            gra [a].push_back (edge(b, w));
            gra [b].push_back (edge(a, w));
        }

            int res = dijkstra (start, end);

            if (res == INF) printf ("Case #%d: unreachable\n", tstn);
            else printf ("Case #%d: %d\n", tstn, res);
        
    }
    return (0);
}
