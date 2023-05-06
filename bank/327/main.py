# powered by Rahmat
# Email: Rahmat2022a@gmail.com
# Github: https://github.com/EnAnsari
# question link: https://quera.org/problemset/178905/

# a:
s = input()
x1, y1 = s.split()
s = input()
x2, y2 = s.split()
# b:
s = input()
x3, y3 = s.split()
s = input()
x4, y4 = s.split()

count = 0

if x1 == x3 or x1 == x4 or y1 == y3 or y1 == y4:
    count = count + 1

if x2 == x3 or x2 == x4 or y2 == y3 or y2 == y4:
    count = count + 1

if count == 1:
    print("happy")
else:
    print("unhappy")