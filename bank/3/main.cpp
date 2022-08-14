/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/9774/
*/

#include <iostream>

using namespace std;

int main()
{

    string str;
    cin >> str;

    for (int i = 0; str[i]; i++)
    {
        cout << str[i] << ": ";
        for (int j = 0; j < str[i] - '0'; j++)
            cout << str[i];
        cout << endl;
    }

    return 0;
}