# powered by Rahmat
# Email: Rahmat2022a@gmail.com
# Github: https://github.com/EnAnsari
# question link: https://quera.org/problemset/132251/


results = []

for i in range(1, 6):
    line = input()

    if "FBI" in line:
        results.append(str(i))

if len(results) == 0:
    print("HE GOT AWAY!")

else:
    output = []

    for i in results:
        output.append(i)

    print(" ".join(output))