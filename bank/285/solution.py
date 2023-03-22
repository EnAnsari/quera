# powered by Rahmat
# Email: Rahmat2022a@gmail.com
# Github: https://github.com/EnAnsari
# question link: https://quera.org/problemset/76278/

def calculator(n, m, li):
    chunk_size = m
    list_chunked = [sum(li[i:i + m]) for i in range(0, len(li), chunk_size)]
    s = sum(list_chunked[0:len(list_chunked):2]) - sum(list_chunked[1:len(list_chunked):2]) 
    return s