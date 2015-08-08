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
    public static void main(String[] args) throws IOException {
        int tests;
        Scanner sc = new Scanner(System.in);
        tests = sc.nextInt();
        for (int i = 0; i < tests; i++) {
            solve(sc);
        }
    }

    static void solve(Scanner sc) {
        String[] h = new String[8];
        sc.next();
        for (int i = 0; i < 8; i++) {
            h[i] = sc.next();
        }
        sc.next();
        StringBuilder sb = new StringBuilder();
        int m = h[0].length();
        for (int i = 1; i <= m - 2; i++) {
            int tmp = 0;
            for (int j = 7; j >= 0; j--) {
                tmp = tmp << 1;
                if (h[j].charAt(i) == '\\') {
                    tmp += 1;
                }
            }
            sb.append((char) tmp);
        }
        System.out.println(sb);
    }
}
