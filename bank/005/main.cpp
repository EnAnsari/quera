/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/280/
*/

#include <iostream>

using namespace std;

int main()
{

    int a, b, c;
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        {
            if (a * a == b * b + c * c)
                cout << "YES";
            else
                cout << "NO";
        }
        else
        {
            if (c * c == a * a + b * b)
                cout << "YES";
            else
                cout << "NO";
        }
    }
    else
    {
        if (b > c)
        {
            if (b * b == a * a + c * c)
                cout << "YES";
            else
                cout << "NO";
        }
        else
        {
            if (c * c == a * a + b * b)
                cout << "YES";
            else
                cout << "NO";
        }
    }

    return 0;
}