# powered by Rahmat
# Email: Rahmat2022a@gmail.com
# Github: https://github.com/EnAnsari
# question link: https://quera.org/problemset/296/

n = int(input())
for i in range(n):
    for j in range(n):
        if i == 0 or i == n - 1 or j == 0 or j == n - 1:
            print("#", end="")
        elif i == j:
            print("#", end="")
        elif i+j == n-1:
            print("#", end="")
        elif j > n-1-i and i<= n//2:
            print("#", end="")
        elif j>i and i > n//2:
            print("#", end="")
        else:
            print(" ", end="")
    print("")