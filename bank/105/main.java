/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/588/
*/

import java.util.Scanner;

public class Main {

    public static Scanner sc;

    public static void main(String[] args) {
        sc = new Scanner(System.in);
        int n = sc.nextInt();
        int nn = 0;
        int max = 0;

        for (int i = 1; i <= n; i++) {
            nn = sc.nextInt();
            if (max < nn)
                max = nn;
        }

        System.out.println(max);

    }

}