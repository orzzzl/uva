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
        while (sc.hasNext()) {
            String tmp = sc.nextLine().trim();
            if (tmp.compareTo("*") == 0) {
                break;
            }
            boolean isOk = tmp.matches("[+-]?\\d+((\\.\\d+)|([Ee][+-]?\\d+))([Ee][+-]?\\d+)?");
            if (isOk == true) {
                System.out.println(tmp + " is legal.");
            } else {
                System.out.println(tmp + " is illegal.");
            }
        }
    }







}
