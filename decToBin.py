
def decToBin(n):
    if n == 0:
        return ' '
    else:
        f = decToBin(n//2)
        return f + str(n%2)

s = '1234'

li = (list(s))
lii = [ int(s) for s in li ]
print(lii)
