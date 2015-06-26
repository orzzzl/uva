#include <bits/stdc++.h>
using namespace std;

int memo [7500][5];
int types [5] = {1, 5, 10, 25, 50};

int sol (int val, int type) {
    if (val == 0) return 1;
    if (type == 5 || val < 0) return 0;
    if (types [type] > val)    return memo [val][type] = 0;
    if (memo [val][type] != -1)    return memo [val][type];
    return memo [val][type] = sol (val, type + 1) + sol (val - types [type], type); 
}


int main () {
    int x;
    memset (memo, -1, sizeof memo);
    while (scanf ("%d", &x) == 1)
	printf ("%d\n", sol(x, 0));
    return 0;
}
