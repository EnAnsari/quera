/*
	powered by Rahmat
	Email: Rahmat2022a@gmail.com
	Github: https://github.com/EnAnsari
	question link: https://quera.org/problemset/594/
*/

import java.util.*;
public class main {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int a = input.nextInt();
		int b = input.nextInt();
		String c = Integer.toString(a, b);

		int sum1 = 0;
		int sum2 = 0;

		for (int i = 0; i < c.length(); i++) {
			int x = Integer.valueOf(c.split("")[i]);

			if (i % 2 == 0) {
				sum1 += x;
			}else {
				sum2 += x;
			}
		}

		if (sum1 == sum2) {

			System.out.println("Yes");
		}else {
			System.out.println("No");
		}


	}
}