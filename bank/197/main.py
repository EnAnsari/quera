# powered by Rahmat
# Email: Rahmat2022a@gmail.com
# Github: https://github.com/EnAnsari
# question link: https://quera.org/problemset/640/

def gcd(num1, num2):
    if not num2:
        return num1

    else:
        remainder = int(num1 % num2)

        return gcd(num2, remainder)


num1 = abs(int(input()))
num2 = abs(int(input()))

print(gcd(num1, num2))