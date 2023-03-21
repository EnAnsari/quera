/*
    powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/33033/
*/

public class Cube {

	public static int[][][] coloring(int[][][] cube) {
		int counter = 0;

		for (int i = 0; i < cube.length; i++) {
			int counter2 = 0;

			if (counter == 0 || counter == cube.length - 1) {
				for (int j = 0; j < cube[0].length; j++) {
					for (int j2 = 0; j2 < cube[0][0].length; j2++) {
						cube[i][j][j2] = 1;
					}
				}
			} else {
				for (int j = 0; j < cube[0].length; j++) {
					for (int j2 = 0; j2 < cube[0][0].length; j2++) {
						if (counter2 == 0 || counter2 == cube[0].length - 1) {
							cube[i][j][j2] = 1;
						} else {
							if (j2 == 0 || j2 == cube[0][0].length - 1) {
								cube[i][j][j2] = 1;
							} else {
								cube[i][j][j2] = 0;
							}
						}
					}
					counter2++;
				}
			}

			counter++;
		}

		return cube;
	}
}