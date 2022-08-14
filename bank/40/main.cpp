/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/49535/
*/

#include <iostream>

using namespace std;

int main()
{
    int n, k, sum = 0;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if (k > sum)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
}