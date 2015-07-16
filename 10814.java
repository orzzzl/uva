import java.awt.*;
import java.awt.event.*;
import java.awt.geom.*;
import java.io.*;
import java.math.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;

public class Main {

	public static void main(String [] Orange) throws Exception {
		Scanner sc = new Scanner(System.in);
		int tests = sc.nextInt();
		while (tests-- > 0) {
			BigInteger a = sc.nextBigInteger();
			String b = sc.next();
			BigInteger c = sc.nextBigInteger();
			BigInteger g = a.gcd(c);
			System.out.println(a.divide(g) + " / " + c.divide(g));
		}
	}
}