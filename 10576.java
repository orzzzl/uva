import java.awt.*;
import java.awt.event.*;
import java.awt.geom.*;
import java.io.*;
import java.io.BufferedReader;
import java.math.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;

public class Main {
    static private Scanner sc;
    static private PrintWriter pw;
    static private final String INPUT = "/Users/zelengzhuang/IdeaProjects/shuati/src/input.txt";
    static int n, num, ans, a, b, c, d, e, tests, s, best, total;
    static int [] x, recx;
    static int [][] memo;
    static ArrayList <Integer> rec;
    static ArrayList <Integer> recBest;
    public static void main(String[] args) throws IOException {
        FileInputStream instream = null;
        try {
            instream = new FileInputStream(INPUT);
            System.setIn(instream);
        } catch (Exception e) {
        }
        sc = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
        pw = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
        while (sc.hasNext()) {
            s = sc.nextInt();
            d = sc.nextInt();
            best = -1;
            solve();
            if (best < 0) {
                pw.println ("Deficit");
            } else {
                pw.println (best);
            }
        }
        pw.flush();
        pw.close();
    }

    static void solve () {
        for (int i = 0; i < (1 << 12); i ++) {
            if (check (i)) {
                total = 0;
                for (int j = 0; j < 12; j ++) {
                    if (((1 << j) & i) > 0) {
                        total += s;
                    } else {
                        total -= d;
                    }
                }
                best = Math.max (best, total);
            }
        }
    }

    static boolean check (int c) {
        for (int i = 0; i <= 7; i ++) {
            int tota = 0;
            for (int j = 0; j < 5; j ++) {
                if ((c & (1 << (i + j))) > 0) {
                    tota += s;
                } else {
                    tota -= d;
                }
            }
            if (tota >= 0) {
                return false;
            }
        }
        return true;
    }
}
