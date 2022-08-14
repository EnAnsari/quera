/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/4067/
*/

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int arr[t][2];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
    }

    for (int i = 0; i < t; i++)
    {
        if ((arr[i][0] == arr[i][1]) || (arr[i][0] - 2 == arr[i][1]))
        {
            if (arr[i][0] % 2 == 0 && arr[i][1] % 2 == 0)
            {
                cout << arr[i][0] + arr[i][1] << endl;
            }
            else
            {
                cout << arr[i][0] + arr[i][1] - 1 << endl;
            }
        }
        else
        {
            cout << -1 << endl;
        }
    }
}
