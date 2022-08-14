/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/31020/
*/

#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cin >> n >> m;

    int ans = n / m;
    if (n % m)
        ans++;
    cout << ans;

    return 0;
}