'''
You want to make a list of the largest or smallest N items in a collection
heapq module has two function - nlargest() and nsmallest() 
heap in python

First converts data into a list where items are ordered as a heap.
nums = [1, 8, 2, 23, 7, -4, 18, 23, 42, 37, 2]
import heapq
heap = list(nums)
heapq.heapify(heap)
print(heap)
[-4, 2, 1, 23, 7, 2, 18, 23, 42, 37, 8]
heap[0] is always the smallest item.

Subsequent items can be easily found using the heapq.heappop( my_heap),
which pops off the first item and replaces it with the next smallest item
requires O(logN) operations where N is the size of the heap.
'''

import heapq

nums = [1,8,2,23,7,-4,18,23,42,37,2]


print(heapq.nlargest(3,nums))
print(heapq.nsmallest(3,nums))

'''
Both functions also accept a key parameter tha allows them to be used with more complicated
data structures. For example:
'''

portfolio = [

        {'name': 'IBM','shares':100,'price': 91.1 },
        {'name': 'I','shares':10,'price': 16.1 },
        {'name': 'AAPL','shares':50 ,'price': 543.22 },
        {'name':'F' ,'shares':500 ,'price':1.09 },
        {'name': 'AA','shares': 5000 ,'price': 43.22 },
        {'name':'FB' ,'shares':200 ,'price':21.09 }

        ]

cheap = heapq.nsmallest(3,portfolio, key = lambda s: s['price']) 
print(cheap)
