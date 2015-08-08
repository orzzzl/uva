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
        Scanner sc = new Scanner(System.in);
        while (sc.hasNext()) {
            HashMap<String, Integer> tm = new HashMap();
            int cnt = sc.nextInt();
            String code = sc.next();
            for (int i = 0; i <= code.length() - cnt; i++) {
                String tmp = code.substring(i, i + cnt);
                if (tm.containsKey(tmp)) {
                    tm.put (tmp, tm.get(tmp) + 1);
                } else {
                    tm.put (tmp, 1);
                }
            }
            String ans = "Not Found";
            int ansVal = 0;
            for (Map.Entry<String, Integer> e : tm.entrySet()) {
                if (e.getValue() > ansVal) {
                    ansVal = e.getValue();
                    ans = e.getKey();
                }
            }
            System.out.println(ans);
        }
    }
}
