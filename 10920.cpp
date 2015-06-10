#include <bits/stdc++.h>
using namespace std;

int main () {
    long long sz, p;
    while (scanf ("%lld %lld\n", &sz, &p), (sz || p)) {
        long long i = 1;
	while (i <= p / i) i += 2;
	long long  cnt = (i - 3) / 2;
	long long  startr, startc;
	startr = startc = (sz + 1) / 2;
	startr += cnt;
	startc += cnt;
	long long  d = 0;
	long long  tr = (i - 2) * (i - 2), r, c;
	r = c = startr;
	startr -= cnt;
	startc -= cnt;
	while (tr != p) {
//	    cout << r << '\t' << c << '\t' << d << endl;
	    long long tar = (cnt * 2 + 1) * (cnt * 2 + 1);
	    if (tar == tr) {
		cnt ++;
	    }
	    tr ++;
	    long long  tmp = d == 0 ? r - startr : d == 1 ? startc - c : d == 2 ? startr - r : c - startc;
	    //   cout << tmp << '\t' << tr << '\t' << cnt << '\t' << tmp << endl;
	    if (tmp == cnt) d = (d + 1) % 4;
	    if (d == 0) r ++;
	    if (d == 1) c --;
	    if (d == 2) r --;
	    if (d == 3) c ++;
	}
	printf ("Line = %lld, column = %lld.\n", r, c);
    }
	return 0;    
}
