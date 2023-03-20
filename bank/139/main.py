# powered by Rahmat
# Email: Rahmat2022a@gmail.com
# Github: https://github.com/EnAnsari
# question link: https://quera.org/problemset/6580/

x, y = input().split()
n = int(input())
dx, dy = input().split()

fx = int(x) + n
fy = int(y) - n

if int(x) <= int(dx) <= int(fx) and int(y) >= int(dy) >= int(fy):
    print("Mahdi")

else:
    print("Parsa")