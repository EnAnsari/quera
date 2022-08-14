/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/2439/
*/

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    const int MAX = 500000;
    int *result = new int[MAX];
    int carry = 0;
    int temp = 0;
    int count = 0;
    int input;
    int n;

    cin >> input >> n;

    result[0] = 1;
    int digits = 1;

    for (int i = 1; i <= input; ++i)
    {
        for (int j = 0; j < digits; ++j)
        {
            temp = result[j] * i + carry;
            carry = temp / 10;
            result[j] = temp % 10;
        }

        while (carry > 0)
        {
            result[digits++] = carry % 10;
            carry /= 10;
        }
    }

    for (int k = digits - 1; k >= 0; k--)
    {
        if (result[k] == n)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}