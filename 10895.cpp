#include <bits/stdc++.h>
using namespace std;



int main () {
    int m, n;
    while (scanf ("%d %d", &m, &n) == 2) {
	vector <int> memo [1005][2];
	for (int i = 0; i < m; i ++) {
	    int num;
	    scanf ("%d", &num);
	    memo [i][0].push_back (num);
	    if (num == 0)    continue;
	    for (int j = 0; j < num; j ++) {
		int tmp;
		scanf ("%d", &tmp);
		memo [i][0].push_back (tmp);
	    }
	    for (int j = 0; j < num; j ++) {
		int tmp;
		scanf ("%d", &tmp);    
		memo [i][1].push_back (tmp);
	    }
	}
	
        printf ("%d %d\n", n, m);
	for (int i = 1; i <= n; i ++) {
	    vector <int> pos, val;
	    pos.clear ();
	    val.clear ();
	    for (int j = 0; j < m; j ++) {
		for (int k = 1; k < memo [j][0].size (); k ++) {
		    if (memo [j][0][k] == i) {
			pos.push_back (j + 1);
			val.push_back (memo [j][1][k - 1]);
			break;
		    }
		}
	    }
	    printf ("%d", pos.size ());
	    for (int l = 0; l < pos.size (); l ++)    printf (" %d", pos [l]);
	    puts ("");
	    for (int l = 0; l < val.size (); l ++)    {printf ("%d", val [l]);    if (l < val.size() - 1) printf (" ");}
	    puts ("");
	}
    }
    return 0;
}
