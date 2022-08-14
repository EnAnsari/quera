/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/34081/
*/

#include <iostream>

using namespace std;

int main()
{
    long long int n, k, x = 0;
    cin >> n >> k;

    long long int arr[999999];
    arr[0] = 1;
    for (long long int i = 1; i < 999999; i++)
    {
        arr[i] = 0;
        arr[i] = arr[i - 1] + 1;
        if (arr[i] == n + 1)
        {
            arr[i] = 1;
        }
    }
    for (long long int i = 0; i < 999999; i += k)
    {

        if (arr[i] == 1 && i != 0)
        {
            cout << x;
            return 0;
        }
        else
        {
            x++;
        }
    }
    for (long long int i = 0; i < 999999; i++)
    {
        cout << arr[i] << ends;
    }
}