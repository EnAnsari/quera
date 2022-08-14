/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/10231/
*/

#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    string str1, str2, str3, str4, str5;
    cin >> str1 >> str2 >> str3 >> str4 >> str5;

    std::size_t found1 = str1.find("MOLANA");
    if (found1 != std::string::npos)
        a++;
    std::size_t found2 = str2.find("MOLANA");
    if (found2 != std::string::npos)
        b++;
    std::size_t found3 = str3.find("MOLANA");
    if (found3 != std::string::npos)
        c++;
    std::size_t found4 = str4.find("MOLANA");
    if (found4 != std::string::npos)
        d++;
    std::size_t found5 = str5.find("MOLANA");
    if (found5 != std::string::npos)
        e++;
    std::size_t found11 = str1.find("HAFEZ");
    if (found11 != std::string::npos)
        a++;
    std::size_t found22 = str2.find("HAFEZ");
    if (found22 != std::string::npos)
        b++;
    std::size_t found33 = str3.find("HAFEZ");
    if (found33 != std::string::npos)
        c++;
    std::size_t found44 = str4.find("HAFEZ");
    if (found44 != std::string::npos)
        d++;
    std::size_t found55 = str5.find("HAFEZ");
    if (found55 != std::string::npos)
        e++;

    if ((a + b + c + d + e) == 0)
    {
        cout << "NOT FOUND!";
    }
    else
    {
        if (a != 0)
        {
            cout << "1 ";
        }
        else
        {
        }
        if (b != 0)
        {
            cout << "2 ";
        }
        else
        {
        }
        if (c != 0)
        {
            cout << "3 ";
        }
        else
        {
        }
        if (d != 0)
        {
            cout << "4 ";
        }
        else
        {
        }
        if (e != 0)
        {
            cout << "5";
        }
        else
        {
        }
    }
}
