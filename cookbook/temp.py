

li = [] 
lii = [ 1 ] 

lii.append(2)

tweets = {}

from collections import defaultdict
from collections import deque
q = lambda: deque(maxlen = 3 )

users = defaultdict(list)
users[1].append(2)
users[1].append(3)
users[1].append(4)
users[2].append(1)
print(users)
tweets = defaultdict(q)
tweets[1].append(1)
tweets[1].append(1)
tweets[1].append(2)
tweets[1].append(3)
tweets[1].append(4)
tweets[1].append(5)
tweets[1].append(6)
tweets[2].append(9)
tweets[2].append(10)
tweets[2].append(100)
tweets[3].append(999)
tweets[4].append(1000)


print((tweets))

nf = []
for userID in users[1]:
    for tweetdeque in tweets[userID]:
        nf.append(tweetdeque)
print(nf)
    




