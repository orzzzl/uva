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
    static int n, num, ans;
    static int [] x, recx;
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
        int tc = 0;
        while (sc.hasNext()) {
            if (tc > 0) {
//                pw.println();
            }
            tc ++;
            n = sc.nextInt ();
            num = sc.nextInt();
            x = new int [num + 5];
            for (int i = 0; i < num; i ++) {
                x [i] = sc.nextInt();
            }
            ans = 0;
            for (int i = 0; i < num; i ++) {
                ArrayList <Integer> rec = new ArrayList<>();
                solve(rec, i, 0);
            }
            for (int i : recBest) {
                pw.print (i + " ");
            }
            pw.println("sum:" + (ans));

        }
        pw.flush();
        pw.close();
    }

    static void solve (ArrayList<Integer> i, int pos, int sumNow) {
        if (x [pos] + sumNow > n) {
            return;
        }
        int sumNew = sumNow + x [pos];
        i.add (x [pos]);
        if (sumNew > ans || (sumNew == ans && i.size() > recBest.size())) {
            ans = sumNew;
            recBest = i;
        }
        for (int j = pos + 1; j < num; j ++) {
            solve (new ArrayList<>(i), j, sumNew);
        }
    }
}
