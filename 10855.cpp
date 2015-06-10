#include <iostream>
#include <stdlib.h>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <sstream>
#include <complex>
#include <ctime>
#include <cassert>
#include <functional>
#include <algorithm>
using namespace std;

typedef long long ll;
#define REP(i,s,t) for(int i=(s);i<(t);i++)
typedef pair<int, int> PII;
typedef pair<ll, ll> PLL;
const int INF = (int)1E9;
#define MAXN 600005
#define vv vector<int>
#define FILL(x,v) memset(x,v,sizeof(x))
int N, n;
int ans [10] = {0};
char big[1000][1000], small[4][1000][1000];

bool ex (int i, int j, int k) {
    for (int m = j; m < j + n; m ++) 
	for (int nn = k; nn < k + n; nn ++) {
	    if (big [m][nn] != small [i][m - j][nn - k]) return 0;
	}
    return 1;
}


int main () {

    while (scanf ("%d %d\n", &N, &n), (N || n)) {
	FILL (ans, 0); 
	for (int i = 0; i < N; i ++) 
	    scanf ("%s\n", big + i);
	for (int i = 0; i < n; i ++)
	    scanf ("%s\n", small [0] + i);
	for (int i = 1; i < 4; i ++) for (int j = 0; j < n; j ++) for (int k = 0; k < n; k ++) 
								      small [i][j][k] = small [i - 1][n - 1 - k][j];
	for (int i = 0; i < 4; i ++) for (int j = 0; j <= N - n; j ++) for (int k = 0; k <= N - n; k ++) 
									   if (ex (i, j, k)) ans [i] ++;
	printf ("%d %d %d %d\n", ans [0], ans [1], ans [2], ans [3]);
    }
    return 0;
}
