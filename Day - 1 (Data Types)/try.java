import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
	
    public static void main(String[] args) {
        int i = 4;
        double d = 4.0;
        String s = "HackerRank ";
		
        Scanner scan = new Scanner(System.in);
        int new_i = Integer.parseInt(scan.nextLine());
        double new_d = Double.parseDouble(scan.nextLine());
        String new_s = scan.nextLine();
        
        int sum_i = i + new_i;
        double sum_d = d + new_d;
        String sum_s = s.concat(new_s);
        
        System.out.println(sum_i);
        System.out.println(sum_d);
        System.out.println(sum_s);
        
        scan.close();
    }
}