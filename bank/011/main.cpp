/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/2636/
*/

#include <iostream>

using namespace std;

int main()
{

    int arr[6];

    for (int i = 0; i < 6; i++)
        cin >> arr[i];

    cout << 1 - arr[0] << " "
         << 1 - arr[1] << " "
         << 2 - arr[2] << " "
         << 2 - arr[3] << " "
         << 2 - arr[4] << " "
         << 8 - arr[5];

    return 0;
}