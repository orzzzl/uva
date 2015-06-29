#include <bits/stdc++.h>
using namespace std;

class UnionFind {
private:
    vector <int> parent, size, score;
    int setNum;
public:
    UnionFind (int n) {
	setNum = n;
	parent.assign (n, 0);
	size.assign (n, 1);
	score.assign (n, 0);
	for (int i = 0; i < n; i ++) 
	    parent [i] = i;
    }

    int findParent (int i) {
	if (parent [i] == i)
	    return i;
	else 
	    return findParent (parent [i]);
    }

    bool isSameSet (int i, int j) {
	return findParent (i) == findParent (j);
    }

    int numOfSets () {
	return setNum;
    }

    int sizeOfSet (int i) {
	return size [findParent (i)];
    }

    int unionSet (int i, int j) {
	if (isSameSet (i, j))    return -1;
	int x = findParent (i);
	int y = findParent (j);
	setNum --;
	if (score [x] == score [y])
	    score [y] ++;
	if (score [x] > score [y]) {
	    parent [y] = x;
	    size [x] += size [y];
	} else {
	    parent [x] = y;
	    size [y] += size [x];
	}
	return 0;	    
    }
};
int tests;
vector <string> edges;
vector <int> nodes;
int main () {
    cin >> tests;
    while (tests --) {
	edges.clear();
	nodes.clear ();
	string s;
	while (1) {
	    getline (cin, s);
	    if (s [0] == '*')    break;
	    if (s.size () > 4)
	        edges.push_back (s);
	}
        string tmp;
        cin >> tmp;
	for (int i = 0; i < tmp.size (); i ++) {
	    if (tmp [i] == ',' || tmp [i] < 'A' || tmp [i] > 'Z') continue;
	    nodes.push_back (tmp [i] - 'A');
	}
	int n = nodes.size ();
	sort (nodes.begin (), nodes.end ());
	UnionFind uf (n);
	for (int i = 0; i < edges.size (); i ++) {
	    int a = edges [i][1] - 'A';
	    int b = edges [i][3] - 'A';
	    int anum = find (nodes.begin(), nodes.end (), a) - nodes.begin ();
	    int bnum = find (nodes.begin(), nodes.end (), b) - nodes.begin ();
	    uf.unionSet (anum, bnum);
	}
	set <int> ss;
	ss.clear ();
	int acorn = 0, tree = 0;
	for (int i = 0; i < nodes.size (); i ++) {
	    if (ss.find (uf.findParent (i)) == ss.end ()) {
		if (uf.sizeOfSet (i) == 1) acorn ++;
		else tree ++;
	    }
	    ss.insert (uf.findParent(i));
	}
	cout << "There are " << tree<< " tree(s) and " << acorn << " acorn(s)." << endl ;
    }
    return 0;
}
