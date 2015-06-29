#include <bits/stdc++.h>
using namespace std;

int tests;
int n;
int rec [105];
int memo [105][105];
void dfs (int s, int y) {
    if (s == y)    return;
    if (rec [s])   return;
    rec [s] = 1;
    for (int j = 0; j < n; j ++)
	if (memo [s][j])    dfs (j, y);
} 


int main ( ) {
    scanf ("%d", &tests);
    for (int ii = 1; ii <= tests; ii ++) { 
	n = -1;
	scanf ("%d", &n);
	memset (memo, 0, sizeof memo);
	for (int i = 0; i < n; i ++)
	    for (int j = 0; j < n; j ++)
		scanf ("%d", &memo [i][j]);
	memset (rec, 0, sizeof rec);
	char result [n][n];
	for (int i = 0; i < n; i ++)    for (int j = 0; j < n; j ++)    result [i][j] = '#';
	dfs (0, -1);
	for (int i = 0; i < n; i ++)
	    for (int j = 0; j < n; j ++) {
		if (i == j && rec [i])    result [i][j] = 'Y';
		if (!rec [j])    result [i][j] = 'N';
	    }
        for (int i = 0 ; i < n; i ++) {
	    memset (rec, 0, sizeof rec);
	    dfs (0, i);
	    for (int j = 0; j < n; j ++) {
		if (result [i][j] != '#')    continue;
		if (rec [j])    result [i][j] = 'N';
		else    result [i][j] = 'Y';
	    }
	}
	printf ("Case %d:\n", ii);
	for (int i = 0; i < n; i ++) {
	    printf ("+");
	    for (int j = 0; j < 2 * n - 1; j ++)    printf ("-");
	    printf ("+\n");
	    for (int j = 0; j < n; j ++)    printf ("|%c", result [i][j]);
	    printf ("|\n");
	}
	printf ("+");
	for (int j = 0; j < 2 * n - 1; j ++)    printf ("-");
	printf ("+\n");
//	if (ii != tests)    puts ("");
/*
        This is so stupid that if you dont put an extra blank line after all the tests finished you will
        get a WA instead of a PE.
 */
    }
    return 0;
}
