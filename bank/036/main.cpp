/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/2794/
*/

#include <iostream>

using namespace std;

int main()
{
    long long int x1, x2, x3, y1, y2, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    if (x1 == x2)
    {
        x4 = x3;
    }
    if (x1 == x3)
    {
        x4 = x2;
    }
    if (x2 == x3)
    {
        x4 = x1;
    }
    if (y1 == y2)
    {
        y4 = y3;
    }
    if (y2 == y3)
    {
        y4 = y1;
    }
    if (y1 == y3)
    {
        y4 = y2;
    }
    cout << x4 << " " << y4;
}