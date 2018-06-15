
/**
 * Write a description of class HW1 here.
 *
 * @author (your name)
 * @version (a version number or a date)
 */
import java.util.Scanner;
import java.io.*;
public class HW6
{
    public static void main(String args[]){
        int n,x,y,m;
        System.out.println("Please input the number of row: ");
        Scanner rows = new Scanner(System.in);
        n = rows.nextInt();
        System.out.println("Please input the number of column: ");
        Scanner columns = new Scanner(System.in);
        m = columns.nextInt();
        
        for (x=0; x<n; x++){
            for (y=0; y<m; y++){
                if (x%2==1){
                    System.out.print("-");
                    System.out.print("-");
            }
                else {
                    System.out.print("*");
                    System.out.print("*");
                }
            }
            System.out.println();
        }
        
        
    }
}
