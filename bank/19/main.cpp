/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/3538/
*/

#include <iostream>

using namespace std;

string day[] = {
    "shanbe",
    "1shanbe",
    "2shanbe",
    "3shanbe",
    "4shanbe",
    "5shanbe",
    "jome"};

int which(string str)
{
    for (int i = 0; i < 7; i++)
        if (str == day[i])
            return i;
    return -1;
}

int main()
{

    int n;
    bool d[7] = {false};
    string str;

    for (int i = 0; i < 3; i++)
    {
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> str;
            d[which(str)] = true;
        }
    }

    n = 0;
    for (int i = 0; i < 7; i++)
        if (!d[i])
            n++;
    cout << n;

    return 0;
}