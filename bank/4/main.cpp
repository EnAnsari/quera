/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/591/
*/

#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cout << '*';
    cout << endl;
    for (int i = 0; i < n - 2; i++)
    {
        cout << '*';
        for (int j = 0; j < n - 2; j++)
            cout << ' ';
        cout << '*' << endl;
    }
    for (int i = 0; i < n; i++)
        cout << '*';

    return 0;
}