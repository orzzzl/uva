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
        String verb = "(hate|love|know|like)s*";
        String noun = "(tom|jerry|goofy|mickey|jimmy|dog|cat|mouse)";
        String article = "(a|the)";
        String actor = "(" + noun + "|" + article + " " + noun + ")";
        String activeList = actor + "( and " + actor + ")*";
        String action = activeList + " " + verb + " " + activeList;
        String statement = action + "( , " + action + ")*";
        while (sc.hasNext()) {
            String tmp = sc.nextLine();
            if (tmp.matches(statement)) {
                System.out.println("YES I WILL");
            } else {
                System.out.println("NO I WON'T");
            }
        }
    }







}
