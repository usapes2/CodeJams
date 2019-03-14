
'''
Problem:
You have a sequence of items, and you’d like to determine the most frequently occurring
items in the sequence.

Solution:
The collections.Counter class is designed for just such a problem. It even comes with
a handy most_common() method that will give you the answer.
'''
words = [ 
        'look', 'into',
        'look', 'into',
        'look', 'into',
        'look', 'into',
        'look', 'into',
        'look', 'into',
        'look', 'into',
        'notSure',
        'notSure',
        'notSure',
        'notSure',
        'around','into'
        ]
from collections import Counter
word_counts = Counter(words)
top_three = word_counts.most_common(3)
print(top_three)
print(word_counts['around'])

print(word_counts)
