#include <bits/stdc++.h>
using namespace std;

int memo [105][105];


int main () {
    int n ;
    scanf ("%d", &n);
    memset (memo, 0, sizeof memo);
    for (int i = 1; i <= n; i ++) for (int j = 1; j <= n; j ++) {
	    scanf ("%d", &memo [i][j]);
	    memo [i][j] += (memo [i - 1][j] + memo [i][j - 1] - memo [i - 1] [j - 1]);
	}
    int ans = INT_MAX * -1;
    for (int x = 1; x <= n; x ++) 
	for (int y = 1; y <= n; y ++)
	    for (int m = x; m <= n; m ++) 
		for (int nn = y; nn <= n; nn ++) {
		    int tmp = memo [m][nn] - memo [x - 1][nn] - memo [m][y - 1] + memo [x - 1][y - 1];
		    ans = max (tmp, ans);
		}
    cout << ans << endl;
    return 0;
}
