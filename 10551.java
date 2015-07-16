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
        while (true) {
        	int b = in.nextInt();
        	if (b == 0)    break;
        	BigInteger p = in.nextBigInteger(b);
        	BigInteger m = in.nextBigInteger(b);
        	System.out.println (p.mod(m).toString(b));
        }
	}
}