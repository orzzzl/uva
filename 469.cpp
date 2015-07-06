#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) \
  for (int i = int(a); i <= int(b); i++)

char line [150];
char g [150][150];
int tests, R, C, row, col;
int x [] = {1, 1, 1, 0,  0, -1, -1, -1};
int y [] = {1, 0, -1, 1,  -1, 1, 0, -1};


int floodfill (int r, int c, char c1, char c2) {
    if (r < 0 || c < 0 || r >= R || c >= C)    return 0;
    if (g [r][c] != c1)    return 0;
    g [r][c] = c2;
    int ans = 1;
    for (int i = 0; i < 8; i ++)    ans += floodfill (r + x[i], c + y [i], c1, c2);
    return ans;
}
int main () {
    sscanf (gets (line), "%d", &tests);
    gets (line);
    while (tests --) {
	R = 0;
	while (1) {
	    gets (g[R]);
	    if (g [R][0] != 'L' && g [R][0] != 'W')    break;
	    R ++;
	}
	C = (int) strlen (g[0]);
	strcpy(line, g [R]);
	while (1) {
	    sscanf (line, "%d %d", &row, &col);
	    row --; col --;
	    printf ("%d\n", floodfill (row, col, 'W', '.'));
	    floodfill (row, col, '.', 'W');
	    gets (line);
	    if (strcmp (line, "") == 0 || feof(stdin))
		break;
	}
	if (tests)    puts ("");
    }
    return 0;
}
