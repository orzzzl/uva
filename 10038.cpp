#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    while (scanf ("%d", &n) !=EOF) {
	int x [n];
	map <int, int> is;
	bool ok = 1;
	for (int i = 0; i < n; i ++) {
	    scanf ("%d", x + i);
	}
	for (int i = 0; i < n - 1; i ++) {
	    int tmp = abs (x [i] - x [i + 1]);
	    if (is [tmp])    {ok = 0; break;}
	    else is [tmp] ++;
	}
	for (int i = 1; i < n; i ++)
	    if (!is [i]) {
		ok = 0;
		break;
	    }
	if (ok)    printf ("Jolly\n");
	else printf ("Not jolly\n");
    }
    return 0;
}
