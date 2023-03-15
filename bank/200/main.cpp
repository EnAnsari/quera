/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/8527/
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int buildings[n];
    for (int i = 0; i < n; i++)
        cin >> buildings[i];
    int leftMax[n], rightMax[n];
    leftMax[0] = buildings[0];
    for (int i = 1; i < n; i++)
        leftMax[i] = max(leftMax[i-1], buildings[i]);
    rightMax[n-1] = buildings[n-1];
    for (int i = n-2; i >= 0; i--)
        rightMax[i] = max(rightMax[i+1], buildings[i]);
    int waterLevel = 0;
    for (int i = 0; i < n; i++)
        waterLevel += min(leftMax[i], rightMax[i]) - buildings[i];
    cout << waterLevel << endl;
    return 0;
}
