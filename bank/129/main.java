/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/647/
*/

import java.util.Scanner;
import java.lang.Math.*;

public class Main {

    public static Scanner sc;

    public static void main(String[] args) {
        sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int sum = 0;
        int temp = 0;

        if (n < 0 || m > 10)
            return;

        for (int i = -10; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (j == 0)
                    continue;

                temp = (int) java.lang.Math.pow(i + j, 3);
                sum += temp / (int) java.lang.Math.pow(j, 2);
            }
        }

        System.out.println(sum);

    }

}