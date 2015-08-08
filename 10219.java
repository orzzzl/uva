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
			String tmpa = sc.next();
			String tmpb = sc.next();
			System.out.println (binomial (new BigInteger (tmpa), new BigInteger (tmpb)).toString().length());
		}
	}
	
	private static BigInteger binomial (BigInteger n, BigInteger k) {
		BigInteger num = BigInteger.ONE;  
		BigInteger tmp = n.subtract(k);
		k = tmp.compareTo(k) == -1 ? tmp : k;
        for (BigInteger i = n.subtract(k).add(BigInteger.ONE); i.compareTo(n) <= 0; i = i.add(BigInteger.ONE))  
            num = num.multiply(i);  
        BigInteger den = BigInteger.ONE;  
        for (BigInteger i = BigInteger.ONE; i.compareTo(k) <= 0; i = i.add(BigInteger.ONE))  
            den = den.multiply(i); 
        return num.divide(den);
	}
}