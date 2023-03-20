# powered by Rahmat
# Email: Rahmat2022a@gmail.com
# Github: https://github.com/EnAnsari
# question link: https://quera.org/problemset/277/

def countBinaries(N):
	powersOfTwo = [0] * 11
	powersOfTwo[0] = 1
	for i in range(1, 11):
		powersOfTwo[i] = powersOfTwo[i - 1] * 2
	ctr = 1
	ans = 0
	
	while (N > 0):
		if (N % 10 == 1):
			ans += powersOfTwo[ctr - 1]
		elif (N % 10 > 1):
			ans = powersOfTwo[ctr] - 1
		ctr += 1
		N = N // 10
	return ans

N = int(input())
print(countBinaries(N))