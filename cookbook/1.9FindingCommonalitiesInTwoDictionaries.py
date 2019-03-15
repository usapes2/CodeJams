'''
Having two dictionaries find out what they might have in common
'''

a = {
        'x':1,
        'y':2,
        'z':3
        }

b = {
        'w':10,
        'x':1,
        'y':2,
        'v':1
        }

'''
to find out what the two dictionaries have in common,
simply perform common set operations using the keys() or
items() method.
'''
# Find keys in common
print((a.keys() & b.keys()))

# Find keys in a that are not in b
print(a.keys() - b.keys())

# Find (key,value) pairs in common
print(type(a.items() & b.items()))

for item in ( a.items() & b.items()):
    print(type(item))

# Make a new dictionary with certain keys removed using dictionary comprehension:
c = {key:a[key] for key in a.keys() - {'z','w'}}
print(c)
