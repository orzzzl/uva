#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    int cnt = 0;
    while (scanf ("%d", &n), n) {
	if (cnt) puts ("");
	cnt ++;
	int ok = 0;
	for (int i = 01234; i <= 98765 / n; i ++) {
	    int j = i * n;
	    //  if (j > 98765)    continue;
	    int tmp, used = (i < 10000);
	    tmp = i;
	    while (tmp) {
		used |= (1 << (tmp % 10));
		tmp /= 10;
	    }
	    tmp = j;
	    while (tmp) {
		used |= (1 << (tmp % 10));
		tmp /= 10;
	    }
	    if (used == (1 << 10) - 1) {
		ok = 1;
		printf ("%05d / %05d = %d\n", j, i, n);
	    }
	}
	if (!ok)
	    printf ("There are no solutions for %d.\n", n);
    }
    return 0;
}
