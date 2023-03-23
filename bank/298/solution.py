# powered by Rahmat
# Email: Rahmat2022a@gmail.com
# Github: https://github.com/EnAnsari
# question link: https://quera.org/problemset/87176/

def get_digit(number, n):
    return number // 10**n % 10
    
def game(number):
    x = get_digit(number, 0)
    y = get_digit(number, 1)
    return abs(x - y)