# powered by Rahmat
# Email: Rahmat2022a@gmail.com
# Github: https://github.com/EnAnsari
# question link: https://quera.org/problemset/605/

def getNoOfWays(n):
	if n <= 2:
		return n
	return getNoOfWays(n - 1) + getNoOfWays(n - 2)

n = int(input())
print(getNoOfWays(n))