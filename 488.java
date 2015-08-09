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
    static int memo[];
    static int amp, fre;
    static String[] amplitude = {"","1","22","333","4444","55555",
            "666666","7777777","88888888","999999999"};
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int tests = sc.nextInt();
        StringBuilder sb = new StringBuilder();
        for (int tn = 1; tn <= tests; tn ++) {
            if (tn > 1) {
                sb.append("\n");
            }
            amp = sc.nextInt();
            fre = sc.nextInt();
            for (int j = 1; j <= fre; j ++) {
                if (j > 1) {
                    sb.append("\n");
                }
                for (int k = 1; k <= amp; k ++) {
                    sb.append(amplitude [k]);
                    sb.append("\n");
                }
                for (int k = amp - 1; k >= 1; k --) {
                    sb.append(amplitude [k]);
                    sb.append("\n");
                }
            }
        }
        System.out.printf(sb.toString());
    }







}
