/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/3404/
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    double m, bmi = 0;
    cin >> n >> m;
    bmi = (n / (m * m));
    printf("%.2f\n", bmi);

    if (bmi < 18.5)
    {
        cout << "Underweight";
        return 0;
    }
    if (bmi >= 18.5 && bmi < 25)
    {
        cout << "Normal";
        return 0;
    }
    if (bmi >= 25 && bmi < 30)
    {
        cout << "Overweight";
        return 0;
    }
    if (bmi >= 30)
    {
        cout << "Obese";
        return 0;
    }
}