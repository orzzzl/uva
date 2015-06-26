#include <bits/stdc++.h>
using namespace std;

int tests, x [15], y [15], n, memo [15][ 1 << 15 ];

int manhattan (int a, int b, int c, int d) {
    return abs (a - c) + abs (b - d);
}

int sol (int pos, int mask) {
    if (mask == (1 << (n + 1)) - 1)
	return memo [pos][mask] = manhattan (x [0], y [0], x [pos], y [pos]);
    if (memo [pos][mask] != -1) 
	return memo [pos][mask];
    int ans = INT_MAX;
    for (int i = 1; i <= n; i ++) {
	if (i != pos && !(mask & (1 << i))) {
	    ans = min (ans, manhattan (x [i], y [i], x [pos], y [pos]) + sol (i, mask | (1 << i)));
	}
    }
    return memo [pos][mask] = ans;
}


int main () {
    scanf ("%d", &tests);
    while (tests --) {
	memset (memo, -1, sizeof memo);
	int a [2];
	scanf ("%d %d", a, a + 1);
	scanf ("%d %d", x, y);
	scanf ("%d", &n);
	for (int i = 1; i <= n; i ++) 
	    scanf ("%d %d", x + i, y + i);
	printf ("The shortest path has length %d\n", sol (0, 1));
    }
    return 0;
}
