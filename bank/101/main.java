/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/49028/
*/

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int changeStateCount = 0;
        int lastState = 0;
        int tempState = 0;

        for (int i = 1; i <= n; i++) {
            tempState = sc.nextInt();

            if (i == 1) {
                lastState = tempState;
            } else if (i > 1 && lastState != tempState) {
                lastState = tempState;
                changeStateCount++;
            }
        }

        System.out.println(changeStateCount);
    }

}