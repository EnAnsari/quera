/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/2659/
*/

#include <iostream>

using namespace std;

int main()
{
    string a, b;
    int n, x = 0;
    cin >> n;
    cin >> a >> b;

    for (int i = 0; i <= n - 1; i++)
    {
        if (a[i] != b[i])
        {
            x++;
        }
    }
    cout << x;
}