'''
Eiminate the duplicate values in a sequence, but preserve the order of the remainig items.
If the values in the sequence are hashable, the problem can be easily solved using a set
and a generator.
'''

def dedupe(items):
    seen = set()
    for item in items:
        if item not in seen:
            yield item
            seen.add(item)

a = [1,5,2,1,9,1,5,10]
print(list(dedupe(a)))


# in dicts to eliminate duplicates

def dedupd(items, key = None):
    seen = set()
    for item in items:
        val = item if key is None else key(item)
        if val not in seen:
            yield item
            seen.add(val)




