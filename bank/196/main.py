# powered by Rahmat
# Email: Rahmat2022a@gmail.com
# Github: https://github.com/EnAnsari
# question link: https://quera.org/problemset/66861/

k = int(input())

# for k in range(1, 300):
good_number = 0
good_number_counter = 0
is_finished = False
while not is_finished:
    good_number_counter += 1
    good_number += good_number_counter
    factor_counter = 0
    counter = 1
    counter_increasment = 1 if good_number % 2 == 0 else 2
    sqrt = int(good_number**0.5)
    if sqrt**2 == good_number:
        if k % 2 == 0:
            k2 = k//2+1
        else:
            k2 = (k-1)//2+1
    else:
        if k % 2 == 0:
            k2 = k//2
        else:
            k2 = k//2+1
    while counter <= sqrt:
        if good_number % counter == 0:
            factor_counter += 1
            if factor_counter >= k2:
                print(good_number)
                is_finished = True
                break
        counter += counter_increasment