# powered by Rahmat
# Email: Rahmat2022a@gmail.com
# Github: https://github.com/EnAnsari
# question link: https://quera.org/problemset/8940/

inp = input()
data = inp.split()
n = int(data[0])
p = int(data[1])
q = int(data[2])

names = []
for x in range(0, n):
	names.append(input())
	
res = {}
for name in names:
	key = name[:p] + "|||" + name[-q:]
	if key not in res:
		res[key] = 1
	
	
print(len(res))