# powered by Rahmat
# Email: Rahmat2022a@gmail.com
# Github: https://github.com/EnAnsari
# question link: https://quera.org/problemset/140033/

vcount = 0;  
str = input() 
str = str.lower()
for i in range(0,len(str)):   
    if str[i] in ('a',"e","i","o","u"):  
        vcount = vcount + 1  
print(vcount)