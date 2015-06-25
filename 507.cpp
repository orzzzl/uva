/*************************************************************************
	> File Name: 507.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Thu Jun 25 03:13:01 2015
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

int tc; 
int s;
int x [20005];

int main () {
    scanf ("%d", &tc);
    for (int i = 1; i <= tc; i ++) {
        scanf ("%d", &s);
        FILL (x, 0);
        int start, end;
        start = end = -1;
        int sum = 0;
        int max = -1;
        start = 1;
        int starttmp = 1;
        for (int j = 0; j < s - 1; j ++) {
            scanf ("%d", x + j);
            sum += x [j];
            if (sum < 0)   { sum = 0; starttmp = j + 2;}
            else {
                if (sum > max || (sum == max && (j + 2 - starttmp > end - start))) {
                    max = sum;
                    start = starttmp;
                    end = j + 2;
                }
            }
        }
        if (end == -1) printf ("Route %d has no nice parts\n", i);
        else printf ("The nicest part of route %d is between stops %d and %d\n", i, start, end);
    }
    return (0);
}
