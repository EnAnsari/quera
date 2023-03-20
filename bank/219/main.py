# powered by Rahmat
# Email: Rahmat2022a@gmail.com
# Github: https://github.com/EnAnsari
# question link: https://quera.org/problemset/10169/


h,a=input().split()
h=int(h)
b=0
for i in a:
    b*=2
    if i=='R':
        b+=0
    else:
        b+=1
for i in range(h-len(a)):
    b+=2**(h-i)
print(b+1)