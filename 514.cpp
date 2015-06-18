#include <bits/stdc++.h>
using namespace std;


int main () {
    int n;
    while (scanf ("%d", &n), n) {
	int x [n];
	while (1) {
	    scanf ("%d", x);
	    if (x [0] == 0)    break;
	    for (int i = 1; i < n; i ++)
		scanf ("%d", x + i);
	    stack <int> st;
	    int p = 0;
	    for (int i = 1; i < n + 1; i ++) {
		if (x [p] == i) {
		    p ++;
		    while (!st.empty ()) {
			if (x [p] == st.top ()) {
			    p ++; st.pop ();
			} else break;
		    }
		}
		else st.push (i);
	    }
	    int ok = 1;
	    while (!st.empty ()) {
		if (st.top ()!= x [p]) {
		    ok = 0;
		    break;
		}
		else {
		    p ++;
		    st.pop ();
		}
	    }
	    if (ok)
		puts ("Yes");
	    else 
		puts ("No");
	}
	puts ("");
    }
    return 0;
}
