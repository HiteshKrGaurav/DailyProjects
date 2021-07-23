'''

π = 1 - 1/3 + 1/5 - 1/7 + 1/9 - ...

'''

num = int(input("Enter a number according to your computer status :"))
a = 1

d = 0

for i in range(num):
    b = a+2
    print(f"a = {a}, b = {b}")
    c = 1/a - 1/b
    d = d + c
    a = a + 4

print(4*d)
