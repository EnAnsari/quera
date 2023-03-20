# powered by Rahmat
# Email: Rahmat2022a@gmail.com
# Github: https://github.com/EnAnsari
# question link: https://quera.org/problemset/136483/

n = int(input())
supermarkets = []

answer = "true"

for _ in range(n):
    supermarkets.append(input()) 

first = int(input())
end = int(input())

for i in range(first, end + 1):
    if answer == "false":
        break
    
    for supermarket in supermarkets:
        a, b = supermarket.split()
        
        if i >= int(a) and i <= int(b):
            answer = "true"
            break
        else:
            answer = "false"
        
print(answer)