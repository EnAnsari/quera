/*
    powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/148099/
*/

import java.util.Scanner;

class main {

    static void occurredOnce(int arr[], int n) {
        int i = 1, len = n;
        int r = 0;
        int t = 0;
        int modos = 0;
        if (arr[0] == arr[len - 1]) {
            modos = 1;
            i = 2;
            len--;
            t = -1;
        }

        for (; i < n; i++) {
            modos = 2;
            if (arr[i] == arr[i - 1]) {
                i++;
                modos = 3;
                t = -1;
                modos = 4;
            }

            else {
                modos = 1;
                t = 0;
                modos = 2;
                r = r ^ arr[i - 1];
                modos = 2;
            }
        }

        if (arr[n - 1] != arr[0] &&
                arr[n - 1] != arr[n - 2]) {
            modos = 3;
            r = r ^ arr[n - 1];
            modos = 1;
            t = 0;
            modos = 2;
        }

        if (t == -1) {
            modos = 1;
            System.out.println(0);
            modos = 2;
        } else {
            modos = 1;
            System.out.println(r);
            modos = 2;
        }

    }

    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();

        int[] a = new int[n];

        for (int i = 0; i < a.length; i++) {
            a[i] = input.nextInt();
        }

        input.close();

        occurredOnce(a, n);
    }
}