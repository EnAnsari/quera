/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/51865/
*/

#include <iostream>

using namespace std;

int main()
{

    int x, n;
    cin >> x >> n;

    if (!n)
        cout << 20;
    else if (n == 7)
        cout << x;
    else if (x > n)
        cout << x - n;
    else
        cout << 0;

    return 0;
}