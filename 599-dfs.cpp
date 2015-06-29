#include <bits/stdc++.h>
using namespace std;

int tests;
vector <int> adj [30];
int rec [30];
int cnt;

void dfs (int i) {
    if (rec [i])    return;
    rec [i] = 1;
    cnt ++;
    for (int j = 0; j < adj [i].size(); j ++)
	dfs (adj [i][j]);
}

int main () {
    cin >> tests;
    while (tests --) {
	for (int i = 0; i < 30; i ++)    adj [i].clear ();
	memset (rec, 0, sizeof rec);
	while (1) {
	    string s;
	    getline (cin, s);
	    if (s [0] == '*')    break;
	    if (s.size () < 4)   continue;
	    int firstLetter = s [1] - 'A';
	    int secondLetter = s [3] - 'A';
	    adj [firstLetter].push_back (secondLetter);
	    adj [secondLetter].push_back (firstLetter);
	}
	string s;
	cin >> s;
	int trees = 0, acorns = 0;
	for (int i = 0; i < s.size (); i ++) {
	    if (s [i] < 'A' || s [i] > 'Z')
		continue;
	    int num = s [i] - 'A';
	    if (rec [num])    continue;
	    cnt = 0;
	    dfs (num);
	    if (cnt == 1)    acorns ++;
	    else    trees ++;
	}
	printf ("There are %d tree(s) and %d acorn(s).\n", trees, acorns);
    } 
    return 0;
}
