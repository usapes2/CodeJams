# Dictionary that maps keys to more than one value.

d = {
        'a': [ 1,2,3 ],
        'b': [ 4,5]
        }
print(d['a'])
print(d['b'])

e = {
        'a': {1,2,3,10,6,7,8,8,8,8},
        'b': { 4,5}
        }

print(e['a'])
print(e['b'])


from collections import defaultdict

dl = defaultdict(list)

dl['a'].append(1)
dl['a'].append(2)
dl['a'].append(9)
dl['a'].append(7)

print(dl['a'])

print(dl['b'])

print(dl)


ds = defaultdict(set)
ds['a'].add(1)
ds['a'].add(1)
ds['a'].add(1)
ds['a'].add(2)
ds['a'].add(9)
ds['a'].add(7)


print(ds['a'])
