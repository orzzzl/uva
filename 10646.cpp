#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, tc;
    scanf ("%d", &n);
    while (tc != n) {
        char buf [1000][5];
        char s [1000];
        gets (s);
        vector <int> vv;
        memset (buf, 0, sizeof (buf));
        memset (s, 0, sizeof (s));
        vv.clear ();
        for (int i = 0; i < 52; i ++) {
            buf [i][0] = s [3 * i];
            buf [i][1] = s [3 * i + 1];
            if (i < 25)
                vv.push_back (i);
        }
            //   printf ("%c%c\n", buf [30][0], buf [30][1]);
        int yy = 0;
        for (int j = 0; j < 3; j ++) {
            int tmp = vv [vv.size () - 1];
            int tt = (buf [tmp][0] <= '9' && buf [tmp][0] >= '2') ? buf [tmp][0] - '0' : 10;
          //  cout << tmp << "\t" << tt << endl;
            yy += tt;
            vv.pop_back ();
            for (int k = 0; k < (10 - tt); k ++)
                vv.pop_back ();
        }
        for (int k = 25; k < 52; k ++)
            vv.push_back (k);
       // cout << yy <<"\t" << vv.size () << endl;
        printf ("Case %d: %c%c\n", ++tc, buf [yy][0], buf[yy][1]);
    //   cout << buf [23][0] << buf [23][1] << endl;
    }
    return 0;
}