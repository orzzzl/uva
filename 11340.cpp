#include <bits/stdc++.h>
using namespace std;

int main () {
    int tests;
    scanf ("%d\n", &tests);
    while (tests --) {
	int n;
	scanf ("%d\n", &n);
	char a;
	int b;
	map <char, int> m;
	for (int i = 0; i < n; i ++) {
	    scanf ("%c %d\n", &a, &b);
	    m [a] = b;
	}
	int k = 0;
	scanf ("%d\n", &k); 
	char c;
	int count = 0;
	while (k --) {
	  	while ((c = getchar ()) != '\n')   
            count += m [c];
	}
	double ans = count * 1.0 / 100;
	printf ("%.2f$\n", ans);
    }
    return 0;
}
