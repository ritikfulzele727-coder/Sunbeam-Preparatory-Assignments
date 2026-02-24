/*
Q9. Accept an integer number and when the program is executed print the
binary, octal and hexadecimal equivalent of the given number.

Sample Output:
terminal> java Test
Enter Number : 20
Given Number :20
Binary equivalent :10100
Octal equivalent :24
Hexadecimal equivalent :14

Hint: Use bitwise operators for binary conversion. Octal/Hexadecimal
conversion to be done by repetitive division using recursion.
*/

import java.util.Scanner;

class Test
{
    // Octal recursion
    static void octal(int n)
    {
        if(n==0) return;
        octal(n/8);
        System.out.print(n%8);
    }

    // Hex recursion
    static void hex(int n)
    {
        if(n==0) return;
        hex(n/16);

        int r = n%16;
        if(r<10) System.out.print(r);
        else System.out.print((char)(r-10+'A'));
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Number : ");
        int n = sc.nextInt();

        System.out.println("Given Number : "+n);

        // Binary (bitwise)
        System.out.print("Binary equivalent : ");
        int started = 0;
        for(int i=31;i>=0;i--)
        {
            int bit = (n>>i)&1;
            if(bit==1) started=1;
            if(started==1) System.out.print(bit);
        }
        if(n==0) System.out.print(0);
        System.out.println();

        // Octal
        System.out.print("Octal equivalent : ");
        if(n==0) 
            System.out.print(0);
        else 
            octal(n);
        System.out.println();

        // Hex
        System.out.print("Hexadecimal equivalent : ");
        if(n==0) 
            System.out.print(0);
        else 
            hex(n);
        System.out.println();
    }
}