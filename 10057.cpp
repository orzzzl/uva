#include <bits/stdc++.h>
using namespace std;


int main () {
    int n;
    while (scanf ("%d", &n) == 1) {
	int x [n];
	for (int i = 0; i < n; i ++)
	    scanf ("%d", x + i);
	sort (x, x + n);
	int mid = (n - 1) / 2;
	int* low = lower_bound (x, x + n, x [mid]);
	int* high = upper_bound (x, x + n, x [mid]);
        if (n % 2)
	    printf ("%d %d %d\n", x [mid], high - low, 1);
	else {
	    int num = x [mid + 1] - x [mid] + 1;
	    int t = 0;
	    if (x [mid] == x [mid + 1]) {
		int* low = lower_bound (x, x + n, x [mid]);
		int* high = upper_bound (x, x + n, x [mid]);
		t = high - low;
	    } else {
		int* low = lower_bound (x, x + n, x [mid]);
		int* high = upper_bound (x, x + n, x [mid]);
		int* nlow = lower_bound (x, x + n, x [mid + 1]);
		int* nhigh = upper_bound (x, x + n, x [mid + 1]);
		t = (high - low) + (nhigh - nlow);
	    }
	    printf ("%d %d %d\n", x [mid], t, num);
	}
    }
    return 0;
}
