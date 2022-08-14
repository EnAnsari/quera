/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/3404/
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;         // n=weight
    double bmi, m; // m=height
    scanf("%d %lf", &n, &m);
    bmi = (n / (m * m));

    printf("%.2lf\n", bmi);

    if (bmi < 18.5)
        printf("Underweight");
    if (bmi >= 18.5 && bmi < 25)
        printf("Normal");
    if (bmi >= 25 && bmi < 30)
        printf("Overweight");
    if (bmi >= 30)
        printf("Obese");
}
