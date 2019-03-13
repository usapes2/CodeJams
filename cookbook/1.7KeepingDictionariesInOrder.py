# Dictionary / control the order of items when iterating
# Use OrderedDict from the collections module. It preserves the
# original insertion order of data when iterating.

from collections import OrderedDict

d = OrderedDict()
d['foo'] = 1
d['bar'] = 2
d['grok'] = -1

for key in d:
    print(key,d[key])
