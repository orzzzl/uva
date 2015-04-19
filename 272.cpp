/*************************************************************************
	> File Name: 272.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Sat Apr 18 15:49:31 2015
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
    char buf [99999];
    int cnt;
    while (gets (buf)) {
        REP (i, 0, strlen (buf)) {
            if (buf [i] != '"')
                cout << buf [i];
            else {
                cnt ++;
                if (cnt % 2)
                    cout << "``";
                else
                    cout << "''";
            }
        }
        cout << endl;
    }
    return (0);
}
