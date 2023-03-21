# powered by Rahmat
# Email: Rahmat2022a@gmail.com
# Github: https://github.com/EnAnsari
# question link: https://quera.org/problemset/123801/

first_disk = input()
first_disk = [int(item) for item in first_disk.split()]

second_disk = input()
second_disk = [int(item) for item in second_disk.split()]


# first_disk = [1, 8, 9, 7, 2]
first_disk_combs = [first_disk]
for i in range(4):
    selected = first_disk[i+1:]
    selected += first_disk[:i+1]
    first_disk_combs.append(selected)

second_disk_combs = [second_disk]
for i in range(4):
    selected = second_disk[i+1:]
    selected += second_disk[:i+1]
    second_disk_combs.append(selected)

is_dividable = False
for comb1 in first_disk_combs:
    for comb2 in second_disk_combs:
        results = [(a+b) % 10 for a, b in zip(comb1[1:-1], comb2[1:-1])]
        if results[0] == 0:
            password = int(f"{results[1]}{results[2]}")
        elif results[0] == 0 and results[1] == 0:
            password = int(results[-1])
        else:
            password = int(f"{results[0]}{results[1]}{results[2]}")

        if (password % 6) == 0:
            is_dividable = True

        if is_dividable:
            break

if is_dividable:
    print("Boro joloo :)")
else:
    print("Gir oftadi :(")
