#include <bits/stdc++.h>
using namespace std;

int row, col, ins;
char g [105][105];
int x [] = {0, 1, 0, -1};
int y [] = {-1, 0, 1, 0};
char z [100000];
int ans;

void search (int r, int c, int d, int n) {
    //   cout << z [n] << '\t' << r << '\t' << c << '\t' << d <<  endl;
    if (g [r][c] == '*') {
	g [r][c] = '.';
	ans ++;
    }
    if (n == ins)    return;
    char action = z [n];
    if (action == 'D')    search (r, c, (d + 5) % 4, n + 1);
    else if (action == 'E')    search (r, c, (d + 3) % 4, n + 1);
    else if (action == 'F') {
	int tmpr = r + y [d];
	int tmpc = c + x [d];
	if (g [tmpr][tmpc] == '#')    search (r, c, d, n + 1);
	else search (tmpr, tmpc, d, n + 1);
    }
} 

int main () {
    freopen ("in", "r", stdin);
    while (scanf ("%d %d %d", &row, &col, &ins), (row || col || ins)) {
	memset (g, '#', sizeof g);
	memset (z, '^', sizeof z);
	int dStart, rStart, cStart;
	for (int i = 1; i <= row; i ++)
	    for (int j = 1; j <= col; j ++) {
        	scanf ("%c", &g [i][j]);
		if (g [i][j] == '\n')    scanf ("%c", &g[i][j]);
		if (g [i][j] == 'N')   {dStart = 0;   rStart = i;    cStart = j;}
		if (g [i][j] == 'S')   {dStart = 2;   rStart = i;    cStart = j;}
		if (g [i][j] == 'L')   {dStart = 1;   rStart = i;    cStart = j;}
		if (g [i][j] == 'O')   {dStart = 3;   rStart = i;    cStart = j;}
	    }
	scanf ("%s", z);
        ans = 0;
	search (rStart, cStart, dStart, 0);
	printf ("%d\n", ans);
    }
    return 0;
} 
