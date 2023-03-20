# powered by Rahmat
# Email: Rahmat2022a@gmail.com
# Github: https://github.com/EnAnsari
# question link: https://quera.org/problemset/20249/


n, k = map(int, input().split())

a = list(map(int, input().split()))

print(((len(a) * k) - sum(a)) // k)