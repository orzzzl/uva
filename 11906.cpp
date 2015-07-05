#include <bits/stdc++.h>
using namespace std;

int tests;
int R, C, m, n, w;
int x []= {1, -1, 1, -1};
int y []= {1, 1, -1, -1};
int g [105][105];
int cnt [105][105];

void dfs (int r, int c) {
    g [r][c] = 1;
    set <pair <int ,int> > rec;
    for (int k = 0; k < 4; k ++) {
	int newr = r + y [k] * m;
	int newc = c + x [k] * n;

	if (rec.find (make_pair (newr, newc)) != rec.end ())  continue;
	rec.insert (make_pair (newr, newc));
	if (newr < 0 || newc < 0 || newr >= R || newc >= C)    continue;
	if (g [newr][newc] == -1)    continue;
	cnt [newr][newc] ++;
	if (g [newr][newc] == 0)    dfs (newr, newc);
    }
    if (m != n) {
	for (int k = 0; k < 4; k ++) {
	    int newr = r + y [k] * n;
	    int newc = c + x [k] * m;
	    if (rec.find (make_pair (newr, newc)) != rec.end ())  continue;
	    rec.insert (make_pair (newr, newc));
	    if (newr < 0 || newc < 0 || newr >= R || newc >= C)    continue;
	    if (g [newr][newc] == -1)    continue;
	    cnt [newr][newc] ++;
	    if (g [newr][newc] == 0)    dfs (newr, newc);
	}
    }
}



int main () {
    scanf ("%d", &tests);
    for (int cases = 1; cases <= tests; cases ++) {
	scanf ("%d %d %d %d %d", &R, &C, &m, &n, &w);
	memset (g, -1, sizeof g);
	memset (cnt, 0, sizeof cnt);
	for (int i = 0; i < R; i ++)
	    for (int j = 0; j < C; j ++)
		g [i][j] = 0;
	while (w --) {
	    int tmpr, tmpc;
	    scanf ("%d %d", &tmpr, &tmpc);
	    g [tmpr][tmpc] = -1;
	}
	dfs (0, 0);
	int even, odd;
	even = odd = 0;
	for (int i = 0; i < R; i ++)
	    for (int j = 0; j < C; j ++) {
		if ((!cnt [i][j]) && !(i == 0 && j == 0))    continue;
		if (cnt [i][j] % 2)    odd ++;
		else    even ++;
	    } 
	printf ("Case %d: %d %d\n", cases, even, odd);
    }
    return 0;
}      
