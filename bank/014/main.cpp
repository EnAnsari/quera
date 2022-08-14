/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/147637/
*/

#include <iostream>

using namespace std;

int main()
{

    int t, m, n, a, b, q, r;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n >> m >> a >> b;
        q = n / (2 * a - 1) + (n % (2 * a - 1) >= a ? 1 : 0);
        r = m / (2 * b - 1) + (m % (2 * b - 1) >= b ? 1 : 0);
        cout << r * q << endl;
    }

    return 0;
}