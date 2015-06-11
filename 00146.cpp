#include <bits/stdc++.h>
using namespace std;


int main () {
    char tc [100];
    while (scanf ("%s\n", tc), (tc [0] != '#')) {
	bool ok = next_permutation (tc, tc + strlen (tc));
	if (ok)
	    printf ("%s\n", tc);
	else 
	    printf ("No Successor\n");
    }
    return 0;
}
