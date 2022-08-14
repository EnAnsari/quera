/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/3539/
*/

#include <iostream>

using namespace std;

unsigned long long int func(unsigned long long int n)
{
    unsigned long long int sum = 0, m;
    while (n > 0)
    {
        m = n % 10;
        sum += m;
        n = n / 10;
    }
    return sum;
}

int main()
{

    unsigned long long int n;
    cin >> n;

    while (n >= 10)
    {
        n = func(n);
    }

    cout << n;

    return 0;
}