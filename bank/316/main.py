# powered by Rahmat
# Email: Rahmat2022a@gmail.com
# Github: https://github.com/EnAnsari
# question link: https://quera.org/problemset/51866/

n, k = map(int, input().split())
arr = list(map(int, input().split()))

arrCopy = arr.copy()
result = -1

arr.sort()

if k == 1:
    result = arr[-1]
elif k == 2:
    result = min(arrCopy[0], arrCopy[-1])
else:
    result = arr[0]
    
print(result)    