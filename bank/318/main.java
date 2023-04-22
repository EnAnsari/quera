/*
    powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/9744/
*/

import java.util.Scanner;

public class main {
    static int min = 999999;
    static String minString = "";
    static int [][] kar;

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        kar = new int[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                kar[i][j] = sc.nextInt();
            }
        }
        String str = "0123456789".substring(0,n);
        permute(str, 0, str.length()-1);
        for(String s : minString.split(""))
        {
            System.out.println(s);
        }
    }

    private static String swap(String a, int i, int j)
    {
        char temp;
        char[] charArray = a.toCharArray();
        temp = charArray[i] ;
        charArray[i] = charArray[j];
        charArray[j] = temp;
        return String.valueOf(charArray);
    }

    private static void permute(String str, int l, int r)
    {
        if (l == r) {
            int i = 0;
            int newOne = 0;
            for(String s : str.split(""))
            {
                newOne += kar[i][Integer.parseInt(s)];
                i++;
            }
            if(min > newOne)
            {
                min = newOne;
                minString = str;
            }
        }
        else
        {
            for (int i = l; i <= r; i++)
            {
                str = swap(str,l,i);
                permute(str, l+1, r);
                str = swap(str,l,i);
            }
        }
    }

}