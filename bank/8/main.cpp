/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/4065/
*/

#include <iostream>

using namespace std;

int main()
{

    int a, b, l;
    cin >> a >> b >> l;

    int n = l / 2 + (l % 2);
    int m = l - n;

    cout << n * a + m * b;

    return 0;
}