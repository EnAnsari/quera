/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/2534/
*/

#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0, avg, x = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    avg = sum / n;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] != avg && arr[i] < avg)
        {
            x += avg - arr[i];
        }
    }

    cout << x;
}