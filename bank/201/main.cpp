/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/279/
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int factorials[11] = {1,1,2,6, 24, 120, 720, 5040, 40320, 362880, 3628800};
    
    int n;
    int x;
    int a;
    int result;
    
    cin >> a >> x >> n;
    
    for (int i = 0; i <= n; i++) {
        result += (factorials[n] / factorials[n - i] / factorials[i]) * pow(x, i) * pow(a, n - i);
    }
    
    cout << result;

    return 0;
}
