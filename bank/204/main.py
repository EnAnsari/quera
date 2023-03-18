# powered by Rahmat
# Email: Rahmat2022a@gmail.com
# Github: https://github.com/EnAnsari
# question link: https://quera.org/problemset/604/


def Josh(person, k, index):
   
  if len(person) == 1:
    print(person[0])
    return
   
  index = ((index+k)%len(person))
 
  person.pop(index)
   
  Josh(person,k,index)
 
n = int(input()) 
k = 1
 
index = 0
 
person=[]
for i in range(1,n+1):
  person.append(i)
 
Josh(person,k,index)