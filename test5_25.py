prime = []
yes = True
print("功能：找出所有小于等于1000的双素数")
for i in range(2, 1000 + 1):  # 1不是素数
    yes = True
    for j in range(2, i):
        if i % j == 0:
            yes = False
            break  # 不是素数
    if yes == True:
        prime.append(i)
    # print(prime)

for i in range(1, len(prime)):
    if prime[i] - prime[i - 1] == 2:
        print("(", prime[i - 1], end=',')
        print(prime[i], end=' )\n')

def jumpFloor(number):
	if number in (1, 2):
		return number
	return jumpFloor(number-1)+jumpFloor(number-2)
n=int(input())
a = jumpFloor(n)
print(a)

