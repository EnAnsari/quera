/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/6082/
*/

#include <iostream>

using namespace std;

int main()
{
    int n, m, setare = 0;
    cin >> n >> m;
    char arr[m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= m - 1; j++)
        {
            cin >> arr[j];
            if (arr[j] == '*')
            {
                setare++;
            }
        }
    }
    cout << setare;
}