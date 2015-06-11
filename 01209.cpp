#include <bits/stdc++.h>
using namespace std;


int main () {
   string s;
   while (cin >> s) {
    string x [1000];
    x [10] = s;
    string tmp = s;
    int i = 9;
    while (i >= 0 && prev_permutation (tmp.begin(), tmp.end()))
        x [i--] = tmp;
    tmp = s;
    i = 11;
    while (i <= 20 && next_permutation (tmp.begin(), tmp.end()))
        x [i++] = tmp;
    string ans;
    int maxval = 0;
    for (int i = 0; i <= 20; i ++) {
        int cur = INT_MAX;
	for (int j = 0; j < x[i].length () - 1; j ++)
	    cur = min (cur, abs(x[i][j] - x[i][j + 1]));
	if (cur > maxval) {
	    maxval = cur;
	    ans = x [i];
	}
    }
    cout << ans << maxval << endl;
    }
    return 0;
}
