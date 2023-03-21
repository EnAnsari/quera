# powered by Rahmat
# Email: Rahmat2022a@gmail.com
# Github: https://github.com/EnAnsari
# question link: https://quera.org/problemset/111990/

day = input()
num = 0

if "shanbe" == day or "doshanbe" == day or "chaharshanbe" == day:
    num = 2

elif "yekshanbe" == day or "panjshanbe" == day or "seshanbe" == day:
    num = 1

elif "jome" == day:
    num = -1

if num > 0:
    if num % 2 == 0:
        print("perspolis")
    else:
        print("bahman")

else:
    print("tatil")