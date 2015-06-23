#include <bits/stdc++.h>
using namespace std;


int main () {
    int tc;
    scanf ("%d\n", &tc);
    while (tc --) {
	int n, m;
	scanf ("%d %d\n", &n, &m);
	int x [n], y [n];
	for (int i = 0; i < n; i ++) { 
	    scanf ("%d", x + i);
	    y [i] = x [i];
	}
	sort (x, x + n);
	int p = n - 1;
	queue <int> q;
	for (int i = 0; i < n; i ++)
	    q.push (i);
	int time = 0;
	while (!q.empty ()) {
	    int tmp = q.front ();
	    q.pop ();
	    if (y [tmp] == x [p]) {
		p --;
		time ++;
		if (tmp == m)
		    break;
	    } else {
		q.push (tmp);
	    }
	}
	printf ("%d\n", time);
    }
    return 0;
} 
