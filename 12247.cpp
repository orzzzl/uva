#include <bits/stdc++.h>
using namespace std;

int main () {
    int a,b,c,x,y;
    while (scanf ("%d %d %d %d %d", &a, &b, &c, &x, &y), (a || b || c || x || y)) {
        int m [3], f[3];
        f[0] = a; f [1] = b; f[2] = c; 
        sort (f, f + 3); 
        int ok = 0;
        for (int i = 1; i <= 52; i ++) {
            if (i == a || i == b || i == c || i == x || i == y)
                continue;
            m [0] = x; m [1] = y;
            m [2] = i;
            sort (m, m + 3);
            // if (i == 30) {
            //     cout << f[0] << f[1] << f[2] << m[0] << m[1] << m[2] << endl;
            // }
            if (f [2] > m [1] && f [1] > m [0]) continue;
            ok = 1;
            printf ("%d\n", i);
            break;
        }
        if (!ok)
            printf ("%d\n", -1);
    }
    return 0;
}