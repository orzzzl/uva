#include <bits/stdc++.h>
using namespace std;

int manhattan (int a, int b, int c, int d) {
    return abs (a - c) + abs (b - d);
}

int T;

int main () {
    cin >> T;
    while (T --) {
	int maxx, maxy;
	cin >> maxx >> maxy;
	int start, end;
	cin >> start >> end;
	int n;
	cin >> n;
	int x [n];
	int y [n];
	int order [n];
	for (int i = 0; i < n; i ++) {
	    order [i] = i;
	    cin >> x [i] >> y [i];
	}
	int ans = INT_MAX;
	int tmp = 0;
	int prex = start, prey = end;
	do {
	    tmp = 0;
	    prex = start;
	    prey = end;
	    for (int j = 0; j < n; j ++) {
		tmp += manhattan (prex, prey, x [order [j]], y [order [j]]);
		prex = x [order[j]]; prey = y [order[j]];
	    }
	    tmp += manhattan (start, end, prex, prey);
	    ans = min (ans, tmp);
	    //  cout << tmp << endl;
	} while (next_permutation (order, order + n));  
	cout << "The shortest path has length " << ans << endl;
    }   
}
