# powered by Rahmat
# Email: Rahmat2022a@gmail.com
# Github: https://github.com/EnAnsari
# question link: https://quera.org/problemset/592/

def printModulus( X, Y):
	
	n = max(X, Y)

	for i in range(2, n + 1):

		if (X % i == Y % i):
			print(i,end=" ")

X, Y = map(int, input().split())
printModulus(X, Y)