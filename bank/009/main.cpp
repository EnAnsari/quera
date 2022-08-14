/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/148639/
*/

#include <iostream>

using namespace std;

void latex(int i, int &max)
{
    if (max <= i)
        return;
    cout << "+\\frac{" << i;
    latex(i * 2, max);
    cout << "}{" << ++i;
    latex(i * 2, max);
    cout << "}";
}

int main()
{

    int n;
    cin >> n;

    int max = 2;
    for (int i = 1; i < n; i++)
        max *= 2;

    cout << 1;
    latex(2, max);

    return 0;
}