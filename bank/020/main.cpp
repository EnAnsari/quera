/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/10325/
*/

#include <iostream>

using namespace std;

int main()
{

    int r, c;
    cin >> r >> c;

    if (c <= 10)
        cout << "Right ";
    else
        cout << "Left ";
    cout << 11 - r << " ";
    if (c <= 10)
        cout << c;
    else
        cout << 21 - c;

    return 0;
}