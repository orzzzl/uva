#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, tc = 0;
    scanf ("%d\n", &n);
    while (tc != n) {
        char buf [1000][5];
        char s [1000];
        vector <int> vv;
        gets (s);
        for (int i = 0; i < 52; i ++) {
            buf [i][0] = s [3 * i];
            buf [i][1] = s [3 * i + 1];
            if (i < 27)
                vv.push_back (i);
        }
        int yy = 0;
        for (int j = 0; j < 3; j ++) {
            int tmp = vv [vv.size () - 1];
            int tt = (buf [tmp][0] <= '9' && buf [tmp][0] >= '2') ? buf [tmp][0] - '0' : 10;
            yy += tt;
            vv.pop_back ();
            for (int k = 0; k < (10 - tt); k ++)
                vv.pop_back ();
        }
        for (int k = 27; k < 52; k ++)
            vv.push_back (k);
	   printf ("Case %d: %c%c\n", ++tc, buf [vv [yy - 1]][0], buf[vv[yy - 1]][1]); 
    }
    return 0;
}
