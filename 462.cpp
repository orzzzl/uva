#include <bits/stdc++.h>
using namespace std;

    int stop [10];
    int cnt [10];
    int card [20][20];

void clear () {
    memset (card, 0, sizeof (card));
    memset (cnt, 0, sizeof (cnt));
    memset (stop, 0, sizeof (stop));
}


int main () {

    char s [1000];

    map <char, int> tran;
    
    tran ['A'] = 1;
    tran ['T'] = 10;
    tran ['J'] = 11;
    tran ['Q'] = 12;
    tran ['K'] = 13;
    tran ['S'] = 0;
    tran ['H'] = 1;
    tran ['D'] = 2;
    tran ['C'] = 3;

    while (gets (s)) {
	clear ();
	for (int i = 0; i < 13; i ++) {
	    cnt [tran [s[i * 3 + 1]]] ++;
	    if (s[i * 3] >= 0 && s [i * 3] <= 9) continue;
	    card [tran [s[i * 3]]] [tran [s[i * 3 + 1]]] = 1;
	}

	int pnt = 0;

	for (int i = 0; i < 4; i ++) {
	    if (card [1][i]) {
		pnt += 4;
		stop [i] ++;
	    }

	    if (card [13][i]) {
		pnt += 3;
		if (cnt [i] == 1)    pnt -= 1;
                if (cnt [i] > 1)    stop [i] ++;
	    }


	    if (card [12][i]) {
		pnt += 2;
		if (cnt [i] <= 2) pnt -= 1;
		else stop [i] ++;
	    }

	    if (card [11][i]) {
		pnt += 1;
		if (cnt [i] <=3) pnt -= 1;
	    }

	}

	if (pnt >= 16 && stop [0] && stop [1] && stop [2] && stop [3]) {
	    puts ("BID NO-TRUMP");
	    continue;
	}

	for (int i = 0; i < 4; i ++) {
	    if (cnt [i] == 2) 
		pnt += 1;
	    if (cnt [i] == 1 || cnt [i] == 0) 
		pnt += 2;
	}

	if (pnt < 14) {
	    puts ("PASS");
	    continue;
	}

	int maxx = 0;
	for (int i = 0; i < 4; i ++) {
	    maxx = max (cnt [i], maxx);
	}

	for (int i = 0; i < 4; i ++) {
	    if (cnt [i] == maxx) {
//		cout << i << endl;
//		cout << maxx << endl;
		char ans = i == 3 ? 'C' : (i == 2 ? 'D' : (i == 1 ? 'H' : 'S'));
		printf ("BID %c\n", ans);
		break;
	    }
	}

    }  

    return 0;
}
