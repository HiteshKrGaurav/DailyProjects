'''
How to draw circle with asterix(*) in python
'''

r = 10

# r = int(input("Radius :"))

l = r

while(l != 0):
    C = int(2*((r**2)-(l**2))**(1/2))
    space = ((2*r) - C)
    print(" "*space, end="")
    print("*"*C, end="")
    print("*"*C)
    l -= 1

while(l != r):
    C = int(2*((r**2)-(l**2))**(1/2))
    space = ((2*r) - C)
    print(" "*space, end="")
    print("*"*C, end="")
    print("*"*C)
    l += 1

# while(l != 0):
#     C = int(2*((r**2)-(l**2))**(1/2))
#     print("*"*C)
#     l -= 1

# while(l != r):
#     C = int(2 * ((r**2)-(l**2))**(1/2))
#     print("*"*C)
#     l += 1

# for l in range(r):
#     C = int(2 * ((r**2)-(l**2))**(1/2))
#     print("*"*C)
