#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;

int T, n;
int memo [1010][40];
int price [1010];
int weight [1010];
int tmp;
int ans;
int sol (int id, int w) {
    if (w == 0)    return 0;
    if (id == n)    return 0;
    if (memo [id][w] != -1)    return memo [id][w];
    if (weight [id] > w)    return memo [id][w] = sol (id + 1, w);
    return memo [id][w] = max (sol (id + 1, w), price [id] + sol (id + 1, w - weight [id]));
}

int main () {
    scanf ("%d", &T);
    while (T --) {
	memset (memo, -1, sizeof memo);
	scanf ("%d", &n);
	for (int i = 0; i < n; i ++) {
	    scanf ("%d %d", &price [i], &weight [i]);
	}
	ans = 0;
	int g = 0;
	scanf ("%d", &g);
	while (g --) {
	    scanf ("%d", &tmp);
	    ans += sol (0, tmp);
	}
	printf ("%d\n", ans);
    }
    return 0;
}
