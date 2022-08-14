/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/82379/
*/

#include <iostream>
using namespace std;

int main()
{
    int c, n, g = 0;
    cin >> c >> n;
    int pi[n];
    for (int i = 0; i < n; i++)
    {
        cin >> pi[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (pi[i + 1] < pi[i])
        {
            c += g * pi[i];
            g = 0;
        }
        if (pi[i + 1] > pi[i])
        {
            g += c / pi[i];
            c %= pi[i];
        }
    }

    if (g > 0)
        c += g * pi[n - 1];

    cout << c << endl;
    return 0;
}