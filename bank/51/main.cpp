/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/31025/
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double n, k;
    cin >> n >> k;
    for (int i = 1; i <= k; i++)
    {
        n /= 2;
    }
    cout << floor(n);
}