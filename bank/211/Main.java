/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/3541/
*/

import java.util.*;

public class Main
{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        long value = Math.round(((long)n*n)/12d) - ((long)n/4)*(((long)n + 2)/4);
        System.out.println(value);
    }
}