# powered by Rahmat
# Email: Rahmat2022a@gmail.com
# Github: https://github.com/EnAnsari
# question link: https://quera.org/problemset/2535/

n = int(input())

names = list()

for i in range(n):
    names.append(input())
    
q = int(input())

info = set()

ans = 0

for i in range(q):
    temp = input()
    info.add(temp)
    
    if len(info) == n:
        ans += 1
        info.clear()
        info.add(temp)
        
        
print(ans)