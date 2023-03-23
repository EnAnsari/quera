/*
    powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/356/
*/

#include <iostream>
using namespace std;
#define int int
int in[1000000];
int pre[1000000];
int search(int arr[], int x, int n)
{
	for (int i = 0; i < n; i++)
		if (arr[i] == x)
			return i;
	return -1;
}
void printPostOrder(int in[], int pre[], int n) {
	int root = search(in, pre[0], n);
	if (root != 0)
		printPostOrder(in, pre + 1, root);
	if (root != n - 1)
		printPostOrder(in + root + 1, pre + root + 1, n - root - 1);
	cout << pre[0] << " ";
}
int32_t main() {
	int n;
	cin >> n;
	for (int i = 0;i < n;i++)
		cin >> in[i];
	for (int i = 0;i < n;i++)
		cin >> pre[i];
	printPostOrder(in, pre, n);
}