/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/148640/
*/

#include <iostream>

using namespace std;

int main()
{

    int n, k, t, f;
    string str, exam;
    cin >> n >> str >> k;
    int ans[k];

    for (int i = 0; i < k; i++)
    {
        t = f = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> exam;
            int temp = 1;
            // temp == 1  => NULL
            // temp == -1 => Wrong
            // temp == 0 => WE DON'T NO
            for (int l = 0; l < 4; l++)
            {
                if (temp == 0 && exam[l] == '#')
                {
                    temp = -1;
                    break;
                }
                else if (exam[l] == '#')
                    temp = 0;
            }
            if (temp == -1)
                f++;
            else if (temp == 0)
            {
                if (exam[str[j] - 'A'] == '#')
                    t++;
                else
                    f++;
            }
        }
        ans[i] = t * 3 - f;
    }

    for (int i = 0; i < k; i++, cout << endl)
        cout << ans[i];

    return 0;
}