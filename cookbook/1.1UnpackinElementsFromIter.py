items = [1,10,7,3,6,99]
head, *tail = items
print(head)
print(tail)

def sum(items):
    """Recursive sum"""
    head, *tail = items
    return head + sum(tail) if tail else head

print(sum([1,2,3,4,5]))

# Note

def f(a, L =[]):
    L.append(a)
    return L
print(f(1))
print(f(2))
print(f(5))
print(f(None))

def g(a, L=None):
    if L is None:
        L=[]
    L.append(a)
    return L
print(g(1))
print(g(2))
print(g(5))
print(g(None))
