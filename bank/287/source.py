# powered by Rahmat
# Email: Rahmat2022a@gmail.com
# Github: https://github.com/EnAnsari
# question link: https://quera.org/problemset/21205/

def check_registration_rules(**kwargs):
    list = []
    for key, value in kwargs.items():
        if key != "quera" and key != "codecup" and len(key) >= 4:
            if len(value) >= 6 and not value.isnumeric():
                list.append(key)
    return list           
print(check_registration_rules(username='password', sadegh='He3@lsa', quera='kLS45@l$'))