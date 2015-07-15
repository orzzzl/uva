import java.awt.*;
import java.awt.event.*;
import java.awt.geom.*;
import java.io.*;
import java.math.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;

public class Main {

	public static void main(String... Orange) throws Exception {
		Scanner in = new Scanner(System.in);
		int tn = 0;
		while (true) {
            int n = in.nextInt(), f = in.nextInt();
            if (n == 0 && f == 0)    break;
            BigInteger sum = BigInteger.ZERO;
            for (int i = 0; i < n; i ++) {
            	BigInteger tmp = in.nextBigInteger();
            	sum = sum.add(tmp);
            }
            System.out.println ("Bill #" + (++tn) + " costs " + sum + ": each friend should pay " 
            + sum.divide(BigInteger.valueOf(f)) + "\n");
		}
	}
}