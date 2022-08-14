/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/1359/
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string a[n];
    string b[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        int x = 0;
        int t = 0;
        int flag = 0;

        for (int j = 0; j <= b[i].length(); j++)
        {
            for (int k = t + 1; k < a[i].length(); k++)
            {
                if (b[i][j] == a[i][k])
                {
                    x++;
                    t = k;
                    break;
                }
            }
        }
        if (x == b[i].length())
        {
            flag = 1;
        }

        t = a[i].length();
        x = 0;
        for (int j = 0; j <= b[i].length(); j++)
        {
            for (int k = t - 1; k >= 0; k--)
            {
                if (b[i][j] == a[i][k])
                {
                    x++;
                    t = k;
                    break;
                }
            }
        }
        if (x == b[i].length())
        {
            flag = 1;
        }

        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}