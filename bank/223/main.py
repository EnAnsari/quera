# powered by Rahmat
# Email: Rahmat2022a@gmail.com
# Github: https://github.com/EnAnsari
# question link: https://quera.org/problemset/10164/


arr = []
for i in range(7):
    arr.append(list(input()))

s = 0

for i in range(7):
    for j in range(7):
        if arr[i][j] == ".":
            s += (i > 1) and arr[i - 1][j] == "o" and arr[i - 2][j] == "o"
            s += (i < 5) and arr[i + 1][j] == "o" and arr[i + 2][j] == "o"
            s += (j > 1) and arr[i][j - 1] == "o" and arr[i][j - 2] == "o"
            s += (j < 5) and arr[i][j + 1] == "o" and arr[i][j + 2] == "o"

print(s)