# powered by Rahmat
# Email: Rahmat2022a@gmail.com
# Github: https://github.com/EnAnsari
# question link: https://quera.org/problemset/660/


tedad = int(input())
dict = {}

for names in range(tedad):
    dict[input()] = 0

for i in range(tedad):
    a = input()
    total, k = map(int, input().split())
    if k != 0:
        pool_a = total % k
        nahaee = total - pool_a
        dict[a] += -(nahaee)

    else:
        dict[a] += total

    if k != 0:
        pool_taghsim = total // k

        for name in range(k):
            b = input()
            dict[b] += pool_taghsim

for key, val in dict.items():
    print(key, val)