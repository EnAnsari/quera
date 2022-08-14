/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/282/
*/

#include <iostream>

using namespace std;

int main()
{

    int n, i = 1, sum = 0;
    cin >> n;
    while (i < n)
    {
        if (n % i == 0)
            sum += i;
        i++;
    }

    if (sum == n)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}