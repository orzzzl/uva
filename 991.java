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
    public static void main(String[] args) throws IOException  {
        Scanner sc = new Scanner (System.in);
        int cnt = 0;
        while (sc.hasNext()) {
            if (cnt > 0) {
                System.out.println();
            }
            cnt ++;
            long tmp = sc.nextLong();
            System.out.println (cat (tmp));
        }
    }
    static long fac (long n) {
        long i = 1;
        for (long j = 1; j <= n; j ++) {
            i *= j;
        }
        return  i;
    }
    static long cat (long n) {
        long a = 2 * n;
        long b = n;
        long c = n + 1;
        return fac (a) / (fac (b) * fac (c));

    }

}
