/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/80651/
*/

#include <iostream>

using namespace std;

int main()
{
    int a[3], b[3];
    int min[3];
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i] >> b[i];
        if (a[i] < b[i])
        {
            min[i] = a[i];
        }
        else
        {
            min[i] = b[i];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        sum += min[i];
    }

    cout << sum;
}
