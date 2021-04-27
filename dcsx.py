a = 1
b = 1
n = int(input('请输入斐波那契数列的项数:'))
print(a, b, end=' ')
for k in range(3, n+1):
    c = a+b
    a = b
    b = c
