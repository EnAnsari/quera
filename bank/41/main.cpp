/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/2596/
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum = 0;
    for (int j = 1; j <= 1000; j++)
    {
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (j % a[i] == 0)
            {
                flag++;
            }
        }
        if (flag == n)
        {
            sum++;
        }
    }

    cout << sum;
}