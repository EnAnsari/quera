# powered by Rahmat
# Email: Rahmat2022a@gmail.com
# Github: https://github.com/EnAnsari
# question link: https://quera.org/problemset/33026/

import json

n = int(input())
l = {}
for i in range(n):
    s = input()
    if s.startswith("print"):
        nameidx = s.split(" ")[1].split("[")
        if nameidx[1][:-1].startswith("\""):
            print(l[nameidx[0]][nameidx[1][1:-2]])
        else:
            print(l[nameidx[0]][int(nameidx[1][:-1])])
    elif s.split(" ")[1] == ':=':
        l.update({s.split(" ")[0]: json.loads(s[len(s.split(" ")[0])+4:])})
