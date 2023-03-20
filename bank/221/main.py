# powered by Rahmat
# Email: Rahmat2022a@gmail.com
# Github: https://github.com/EnAnsari
# question link: https://quera.org/problemset/52543/


n = int(input())
numbers = [int(i) for i in input().split()]
numbers.sort(reverse=True)

answer = []

while len(numbers) >= 2:
    answer.append(numbers[0])
    answer.append(numbers[-1])
    numbers = numbers[1: -1]
    
if len(numbers) > 0:
    answer.append(numbers[0])
    
print(" ".join(str(item) for item in answer))