'''

π = 1 - 1/3 + 1/5 - 1/7 + 1/9 - ...

'''

num = int(input("Enter a number according to your computer status :"))
a = 1

d = 0
x = num%2
if(x==0):
    x = num/50
else:
    x = (num+1)/50

y = 1
print("[", end="")
for i in range(num):
    b = a+2
    # print(f"a = {a}, b = {b}")
    if ((x*y) == i):
        print("#", end="")
        y = y + 1

    c = 1/a - 1/b
    d = d + c
    a = a + 4
print("]")
print("Value of pi is", 4*d)
