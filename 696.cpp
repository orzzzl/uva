/*************************************************************************
	> File Name: 696.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Thu May 28 12:39:58 2015
************************************************************************/

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

int sol (int m, int n) {
    if (n > m) swap (n, m); 
    if (n == 1) return m;
    if (n == 2) {
	int rest;
	if (m % 4 >= 2) rest = 4;
	else if (m % 4 == 1) rest = 2;
	else rest = 0;
	return m / 4 * 4 + rest;
    }
    return (m * n + 1) / 2;
}


int main () {
    int m, n;
    while (scanf ("%d %d", &m, &n), (n || m)) {
	printf ("%d knights may be placed on a %d row %d column board.\n", sol (m, n), m, n);
    }
    return (0);
}
