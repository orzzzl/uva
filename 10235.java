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
        while (in.hasNext()) {
        	BigInteger tmp = in.nextBigInteger();
        	if (!tmp.isProbablePrime(10)) {
        		System.out.println(tmp + " is not prime.");
        		continue;
        	}
        	BigInteger pmt = new BigInteger (new StringBuffer (tmp.toString()).reverse().toString());
        	if (pmt.compareTo(tmp) != 0 && pmt.isProbablePrime(10)) {
        		System.out.println (tmp + " is emirp.");
        	} else {
        		System.out.println (tmp + " is prime.");
        	}
        }
	}
}