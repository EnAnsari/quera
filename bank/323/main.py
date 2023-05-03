# powered by Rahmat
# Email: Rahmat2022a@gmail.com
# Github: https://github.com/EnAnsari
# question link: https://quera.org/problemset/170060/

n, d = map(int, input().split())
h = list(map(int, input().split()))

h.sort()

tallest = h[-1]

ans = 0

for i in range(n - 1):
    if tallest - h[i] > d:
        ans += tallest - h[i] - d

print(ans) 