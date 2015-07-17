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
	static BigInteger[] x = new BigInteger[120];
	 
	public static void main(String[] args) throws IOException  {
		x [0] = BigInteger.ONE;
		x [1] = new BigInteger ("2");
		for (int i = 2; i < 120; i ++) {
			BigInteger tmp = x[i - 1].add (x[i - 2]);
			x [i] = tmp;
		}
		Scanner sc = new Scanner(System.in);
		int cnt = 0;
		while (sc.hasNext()) {
			if (cnt ++ > 0)    System.out.println();

            String tmpa = sc.next();
            String tmpb = sc.next();
     
		    BigInteger c = BigInteger.ZERO;
		    for (int i = tmpa.length() - 1; i >= 0; i --) {
		    	if (tmpa.charAt(i) == '1') {
		    		c = c.add(x[tmpa.length() - 1 - i]);
		    	}
		    }
		    for (int i = tmpb.length() - 1; i >= 0; i --) {
		    	if (tmpb.charAt(i) == '1') {
		    		c = c.add(x[tmpb.length() - 1 - i]);
		    	}
		    }           
		    int hi = 120, lo = 0, ind = 0;
		    while (hi >= lo) {
		    	int mid = (hi + lo) / 2;
		    	BigInteger tmpval = x[mid];
		    	if (tmpval.compareTo(c) == 1) {
		    		hi = mid - 1;
		    	} else {
		    		ind = Math.max(ind, mid);
		    		lo = mid + 1;
		    	}
		    }
		    String out = "";
		    for (int i = ind; i >= 0; i --) {
		        BigInteger tmp = x[i];
		        if (tmp.compareTo(c) == 1) {
		        	out = out + "0";
		        } else {
		        	out = out + "1";
		        	c = c.subtract(tmp);
		        }
		    }
		    System.out.println (out);
		}
	}
}