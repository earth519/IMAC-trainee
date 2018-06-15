
/**
 * Write a description of class HW1 here.
 *
 * @author (your name)
 * @version (a version number or a date)
 */
import java.util.Scanner;
import java.io.*;
public class HW2
{
    public static void main(String args[]){
        int n,x;
        System.out.println("Please input the number: ");
        Scanner rows = new Scanner(System.in);
        n = rows.nextInt();
        
        for (x=0; x<n; x++){
            if (x%2==1){
                System.out.print("-");
        }
            else{
                System.out.print("*");
        }
    }
        
    }
}
