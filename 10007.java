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
        while (sc.hasNext()) {
            int tmp = sc.nextInt();
            if (tmp == 0) {
                break;
            } else {
                System.out.println (cat (tmp).multiply(fac (tmp)).toString ());
            }
        }
    }
    static BigInteger fac (int n) {
        BigInteger i = BigInteger.ONE;
        for (int j = 1; j <= n; j ++) {
            i = i.multiply(BigInteger.valueOf(j));
        }
        return  i;
    }
    static BigInteger cat (int n) {
        int a = 2 * n;
        int b = n;
        int c = n + 1;
        return fac (a).divide(fac (b).multiply(fac (c)));

    }

}
