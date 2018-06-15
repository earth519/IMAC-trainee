
/**
 * Write a description of class HW8 here.
 *
 * @author (your name)
 * @version (a version number or a date)
 */
import java.util.*;
import java.io.*;
public class HW8
{
    public static void main(String[] args)
    {
        int s,x,n,mx=0;
        int list[] = new int[10];
        
        System.out.println("This size of this list = 10");
            for (x = 0; x < 10; x++){ 
                System.out.println("Please input the numbers: ");
                Scanner numb = new Scanner(System.in);
                n = numb.nextInt();
                list[x]=n;
                mx+=n;
            }
           System.out.printf("Your sum of the numbers in this list is: %d",mx);
    }
}
