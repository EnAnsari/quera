# powered by Rahmat
# Email: Rahmat2022a@gmail.com
# Github: https://github.com/EnAnsari
# question link: https://quera.org/problemset/603/

def countWays(n):
    res = [0] * (n + 4)
    res[0] = 1
    res[1] = 1
    res[2] = 2
    res[3] = 3
    res[4] = 5
    res[5] = 8
 
    for i in range(3, n + 1):
        res[i] = res[i - 1] + res[i - 2] + res[i - 5]
 
    return res[n]
 

n = int(input())
print(countWays(n))