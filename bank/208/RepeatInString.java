/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/14445/
*/

public class RepeatInString {
    public int StringInString(String one, String two) {

        if (one == null || two == null) {
            return 0;
        }

        int M = two.length();
        int N = one.length();
        int res = 0;

        if (one == "" || two == "") {
            return 0;
        }

        /* A loop to slide pat[] one by one */
        for (int i = 0; i <= N - M; i++) {
            /*
             * For current index i, check for
             * pattern match
             */
            int j;
            for (j = 0; j < M; j++) {
                if (one.charAt(i + j) != two.charAt(j)) {
                    break;
                }
            }

            // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
            if (j == M) {
                res++;
                j = 0;
            }
        }
        return res;
    }

}