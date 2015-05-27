#include <bits/stdc++.h>
using namespace std;

int main () {
    int tc;
    char a; int m, n;
    cin >> tc;
    while (tc --) {
	cin >> a >> m >> n;
	if (a == 'Q' || a == 'r') 
            printf ("%d\n", min (m, n));
        if (a == 'K')
	    printf ("%d\n", ((m + 1) / 2) * ((n + 1) / 2));
	if (a == 'k')
	    printf ("%d\n", (n * m + 1) / 2);
    }
    return 0;
}
