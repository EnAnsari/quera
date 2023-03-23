/*
    powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/147635/
*/

import java.util.Scanner;

public class main {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        for (int i = 0; i <n ; i++) {
            int nn = scanner.nextInt();

            if (nn > 15){
                System.out.println("cooler");
            }else {
                System.out.println("heater");
            }
        }

        scanner.close();

    }
}