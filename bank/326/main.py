# powered by Rahmat
# Email: Rahmat2022a@gmail.com
# Github: https://github.com/EnAnsari
# question link: https://quera.org/problemset/178906/

s = input()
s = s.split()
for i in range(0, len(s)):
    s[i] = int(s[i])

k, v, n = s[0], s[1], s[2]

a = input()
a = a.split()
for i in range(0, len(a)):
    a[i] = int(a[i])

c = input()
c = c.split()
for i in range(0, len(c)):
    c[i] = int(c[i])

boxes = []
count = 0

for i in range(n):
    if c[i] <= v and a[i] >= k + 1 and a[i] % (k + 1) == 1:
        boxes.append(c[i])

boxes.sort()

for i in range(len(boxes)):
    if v >= boxes[i]:
        v = v - boxes[i]
        count = count + 1
    else:
        break

print(count)