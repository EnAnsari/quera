/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/589/
*/

#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int ans = 1;
    for (int i = 2; i <= n; i++)
        ans *= i;

    cout << ans;

    return 0;
}