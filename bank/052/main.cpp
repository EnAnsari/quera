/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/3406/
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, c = 0, d = 0, e, f;
    cin >> a >> b;
    e = a;
    f = b;
    while (a > 0)
    {
        int lastDigit = a % 10;
        c = c * 10 + lastDigit;
        a /= 10;
    }
    while (b > 0)
    {
        int lastDigit = b % 10;
        d = d * 10 + lastDigit;
        b /= 10;
    }
    if (d > c)
    {
        // 421 < 123
        cout << e << " < " << f;
    }
    if (d < c)
    {
        cout << f << " < " << e;
    }
    if (c == d)
    {
        cout << f << " = " << e;
    }
}