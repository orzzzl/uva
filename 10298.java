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
        Scanner sc = new Scanner (System.in);
        while (sc.hasNext()) {
            String x = sc.next();
            if (x.equals(".")) {
                break;
            }
            int l = x.length();
            for (int i = 1; i <= l; i ++) {
                if (l % i != 0) {
                    continue;
                }
                boolean ok = true;
                for (int k = 0; k < i; k ++) {
                    if (ok == false) {
                        break;
                    }
                    char tar = x.charAt(k);
                    for (int j = k; j < l; j += i) {
                        if (x.charAt(j) != tar) {
                            ok = false;
                            break;
                        }
                    }
                }
                if (ok == true) {
                    System.out.println(l / i);
                    break;
                }
            }
        }
    }
}
