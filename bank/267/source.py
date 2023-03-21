# powered by Rahmat
# Email: Rahmat2022a@gmail.com
# Github: https://github.com/EnAnsari
# question link: https://quera.org/problemset/129728/

print(" ".join(sorted([i if (ord(i) - 97) % 2 == 0 else i.upper() for i in str(input())], reverse=True)))