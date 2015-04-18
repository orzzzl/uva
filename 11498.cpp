/*************************************************************************
	> File Name: 11498.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Sat Apr 18 02:20:41 2015
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


int main () {
    int k;
    while (1) {
    cin >> k;
    int a, b;
        if (!k) break;
    cin >> a >> b;
    while (k --) {
        int x, y;
        cin >> x >> y;
        x -= a; y -= b;
        if (x == 0 || y == 0)
            cout << "divisa\n";
        if (x > 0 && y > 0)
            cout << "NE\n";
        if (x > 0 && y < 0)
            cout << "SE\n";
        if (x < 0 && y > 0)
            cout << "NO\n";
        if (x < 0 && y < 0)
            cout << "SO\n";
    }
    }
    return (0);
}
