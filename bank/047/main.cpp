/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/33045/
*/

#include <iostream>

using namespace std;

int main()
{
    int n, x, sum = 0, k = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                k++;
                sum += j;
            }
        }
    }
    cout << k << " " << sum;
}