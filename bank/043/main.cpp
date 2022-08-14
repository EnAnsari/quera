/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/35253/
*/

#include <iostream>

using namespace std;

int main()
{
    int n, k = 1;
    int max;
    cin >> n;
    int arr[n + 1];
    cin >> arr[1];
    max = arr[1];
    for (int i = 2; i <= n; i++)
    {
        cin >> arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
            k = i;
        }
        else
        {
        }
    }
    cout << k;
}