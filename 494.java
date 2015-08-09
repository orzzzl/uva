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
            String tmp = sc.nextLine();
            System.out.println(tmp.replaceAll("[^a-zA-Z]+", " ").trim().split(" ").length);
        }
    }







}
