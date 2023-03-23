# powered by Rahmat
# Email: Rahmat2022a@gmail.com
# Github: https://github.com/EnAnsari
# question link: https://quera.org/problemset/1360/


import re
n=int(input())
url={}
for i in range(n):
    s=input()
    for j in range(len(s)):
        if s[j]==' ':
            url[s[:j]]=s[j+1:]
            break
t=int(input())
for i in range(t):
    s=input()    
    for j in range(len(s)):
        if s[j]==' ':
            if s[:j] not in url:
                print("[Error] url not found")
                break
            else:
                ss=url[s[:j]]
                l,r=j+1,j+1
                while r<len(s):
                    while s[r]!='=':
                        r+=1
                    a=s[l:r]
                    l=r+1
                    while r<len(s):
                        if s[r]==' ':
                            break
                        elif r==len(s)-1:
                            r+=1
                            break
                        r+=1
                    b=s[l:r]
                    #print(a,b)
                    flag=0
                    for k in range(len(ss)):
                        if flag:
                            break
                        if ss[k]=='<':
                            for l in range(k,len(ss)):
                                if ss[l]=='>':
                                    if a==ss[k+1:l]:
                                        ss=ss[:k]+b+ss[l+1:]
                                        flag=1
                                        break
                                    break
                    l=r+1
                    r+=1
                flag2=0
                for m in range(len(ss)):
                    if ss[m]=='<':
                        print("[Error] missing parameter(s)")
                        #print(ss)
                        flag2=1
                        break
                if not flag2:
                    print(ss)
            break
        elif j==len(s)-1:
            if s not in url:
                print("[Error] url not found")
            else:
                flag=0
                for k in range(len(url[s])):
                    if url[s][k]=='<':
                        print("[Error] missing parameter(s)")
                        flag=1
                        break
                if not flag:
                    print(url[s])