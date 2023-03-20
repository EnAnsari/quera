# powered by Rahmat
# Email: Rahmat2022a@gmail.com
# Github: https://github.com/EnAnsari
# question link: https://quera.org/problemset/10165/


import sys

x = {}
n = int(input())
for _ in range(n):
    inp = input().split(' ')
    x[int(inp[0])] = int(inp[1])
dic = sorted(x.items())
mald = len(set(x.values()))
dic2 = set()
for i in range(len(dic) - 1):
    if dic[i][1] != dic[i + 1][1]:
        dic2.add(dic[i])
        dic2.add(dic[i + 1])
dic = sorted(dic2)
le = len(dic)
minim = sys.maxsize
i = 0
while i < le:
    dic2 = set()
    if i + mald <= le:
        for j in range(i, i + mald - 1):
            dic2.add(dic[j][1])

        for j in range(i + mald - 1, le):
            dic2.add(dic[j][1])
            if len(dic2) == mald:
                minim = min([dic[j][0] - dic[i][0], minim])
                break
    if not len(dic2) == mald:
        break
    dic2 = set()
    for k in range(mald - 1):
        dic2.add(dic[j - k][1])
    for k in range(mald - 1, j - i + 1):
        dic2.add(dic[j - k][1])
        if len(dic2) == mald:
            minim = min([dic[j][0] - dic[j - k][0], minim])
            i = j - k + 1
            break

print(minim)