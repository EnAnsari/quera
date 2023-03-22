# powered by Rahmat
# Email: Rahmat2022a@gmail.com
# Github: https://github.com/EnAnsari
# question link: https://quera.org/problemset/129726/

def separator(A):
    evenlist = [] 
    oddlist = [] 
    for i in A: 
        if (i % 2 == 0): 
            evenlist.append(i) 
        else: 
            oddlist.append(i) 
    return (evenlist, oddlist)