# powered by Rahmat
# Email: Rahmat2022a@gmail.com
# Github: https://github.com/EnAnsari
# question link: https://quera.org/problemset/20251/

class tree:
    def __init__(self, father, jarime, index):
        self.index = index
        self.children = []
        self.father = father
        self.jarime = jarime


nodes = []


def findjarime(index):
    global nodes
    jar = 0
    childs = nodes[index].children
    count = 0
    for child in childs:
        res = findjarime(child.index)
        jar += res[0]
        count += res[1]
    jar += count
    jar += 1
    count += 1
    return jar, count


n = int(input())

line = input()
farman = line.split(" ")


for i in range(n):
    nodes.append(tree(None, None, i))

for i in range(len(farman)):
    nodes[i+1].father = nodes[int(farman[i])-1]
    nodes[int(farman[i])-1].children.append(nodes[i+1])

boss = None
for i in range(n):
    if (nodes[i].father == None):
        boss = i
        break

print(findjarime(boss)[0])
