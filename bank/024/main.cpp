/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/148638/
*/

#include <iostream>

using namespace std;

int main()
{

    int t;
    cin >> t;
    int a, b, c, d, ans[t];

    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> c >> d;
        if (a + c > b + d)
            ans[i] = 0;
        else if (a + c < b + d)
            ans[i] = 1;
        else if (c > b)
            ans[i] = 0;
        else if (c < b)
            ans[i] = 1;
        else
            ans[i] = 2;
    }

    for (int i = 0; i < t; i++, cout << endl)
        if (ans[i] == 0)
            cout << "perspolis";
        else if (ans[i] == 1)
            cout << "esteghlal";
        else
            cout << "penalty";

    return 0;
}