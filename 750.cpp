#include <bits/stdc++.h>
using namespace std;

int x [10];
int tc, a, b, line;

int isVal (int r, int c) {
    for (int i = 1; i < c; i ++) {
	if (x [i] == r || abs (i - c) == abs (r - x [i]))    return 0;
    }
    return 1;
}

int back_track (int c) {
    if (c == 9 && x [b] == a) {
	printf ("%2d     ", line ++); 
	for (int i = 1; i <= 8; i ++)
	    printf (" %d", x [i]);
	puts ("");
    }
    for (int j = 1; j <= 8; j ++) {
        if (isVal (j, c)) {
	    x [c] = j;
	    back_track (c + 1);
	}

    }
    return 0;
}


int main () {
    cin >> tc;
    while (tc --) {
	line = 1;
	memset (x, 0, sizeof x);
	cin >> a >> b;
	cout << "SOLN       COLUMN" << endl << " #      1 2 3 4 5 6 7 8\n\n";
	back_track (1);
	if (tc)    puts ("");
    }
    return 0;
}
