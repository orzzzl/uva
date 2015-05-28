/*************************************************************************
	> File Name: 10284.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Thu May 28 13:04:36 2015
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
    int tc;
    int ok = 0;
    while (cin >> tc, tc != -1) {
        ok = 0;
        string ans, gue;
        cin >> ans >> gue;
        int rec [30];
        bool gg [30];
        int cnt = 0;
        FILL (gg, 0);
        FILL (rec, 0);
        for (int i = 0; i < ans.length (); i ++)
            rec [ans [i] - 'a'] = 1;
        for (int i = 0; i < gue.length (); i ++) {
            int tt = gue [i] - 'a';
            if (rec [tt] == 0 && gg [tt] == 0)
                cnt ++;
            if (rec [tt] == 1)
                rec [tt] = 2;
            gg [tt] = 1;
            if (cnt >= 7) {ok = 1;break;}
            int flag = 0;
            for (int j = 0; j < 30; j ++) {
                if (rec [j] == 1) {
                    flag ++;
                    break;
            }}
            if (!flag) {
               ok = 2;
               break;
        }}
	//cout << ok << endl;
        cout << "Round " << tc << endl;
        if (ok == 0)
            puts ("You chickened out.");
        if (ok == 1)
            puts ("You lose.");
        if (ok == 2)
            puts ("You win.");
    }
    return (0);
}
