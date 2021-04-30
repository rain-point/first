
n = 100
sum =100
for i in range(11):
    n = n // 2
    sum =sum + 2 * n
    if i == 10:
        print(n)
        print(sum)
for i in range(102, 201):
    for a in range(2, i):
        if i % a == 0:
            break
    else:
        print(i)