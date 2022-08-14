/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/3414/
*/

#include <iostream>

using namespace std;

int main()
{

    int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if (y2 == y1)
        cout << "Horizontal";
    else if (x1 == x2)
        cout << "Vertical";
    else
        cout << "Try again";

    return 0;
}