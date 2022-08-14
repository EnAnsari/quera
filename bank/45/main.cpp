/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/2530/
*/

#include <iostream>

using namespace std;

int main()
{
    char a[20];
    long long int arr[20];
    for (int i = 0; i < 20; i++)
    {
        a[i] = 0;
        arr[i] = 1;
    }
    cin >> a;
    int x = 1;
    for (int i = 0; i < 20; i++)
    {
        if (a[i] == 'T' || a[i] == 'D' || a[i] == 'F' || a[i] == 'L')
        {
            arr[i] = 2;
        }
    }
    for (int i = 0; i < 20; i++)
    {
        if (arr[i] != 0)
        {
            x *= arr[i];
        }
    }

    cout << x;
}