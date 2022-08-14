/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/2529/
*/

#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0, max = 0;
    int a[123] = {0};
    cin >> n;
    string str[n];

    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < str[i].length(); j++)
        {
            for (int k = 65; k <= 122; k++)
            {
                if (str[i][j] == k)
                {
                    a[k] = 1;
                    break;
                }
            }
        }
        for (int k = 65; k <= 122; k++)
        {
            if (a[k] == 1)
            {
                sum++;
            }
        }
        if (sum > max)
        {
            max = sum;
            for (int i = 65; i <= 122; i++)
            {
                a[i] = 0;
            }
            sum = 0;
        }
        else
        {
            for (int i = 65; i <= 122; i++)
            {
                a[i] = 0;
            }
            sum = 0;
        }
    }
    cout << max;
}