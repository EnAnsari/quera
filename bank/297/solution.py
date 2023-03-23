# powered by Rahmat
# Email: Rahmat2022a@gmail.com
# Github: https://github.com/EnAnsari
# question link: https://quera.org/problemset/60134/

def is_good(fruit):
    if fruit['shape'] == 'sphere' and 300 <= fruit['mass'] <= 600 and 100 <= fruit['volume'] <= 500:
        return True # Fruit is good
    else:
        return False # Fruit is bad

def fruits(tuple_of_fruits):
    dict = {}
    for fruit in tuple_of_fruits:
        if is_good(fruit):
            if fruit['name'] in dict:
                dict[fruit['name']] += 1
            else:
                dict[fruit['name']] = 1
    return dict