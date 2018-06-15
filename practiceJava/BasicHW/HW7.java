
/**
 * Write a description of class HW1 here.
 *
 * @author (your name)
 * @version (a version number or a date)
 */
import java.util.Scanner;
import java.io.*;
public class HW7
{
    public static void main(String args[]){
        int n,x,y,m;
        System.out.println("Please input the number: ");
        Scanner rows = new Scanner(System.in);
        n = rows.nextInt();
        m = n*2-2;
        for (x=0; x<n; x++){
            for (y=0; y<m; y++){
                System.out.print(" ");
            }
            m = m-1;
            for (y=0; y<x+1; y++){
                System.out.print("*");
            }
            for (y=1; y<x+1; y++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
