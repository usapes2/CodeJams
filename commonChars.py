"""
Given an array A of strings made only from lowercase letters, return a list of all characters that show up in all strings within the list (including duplicates).  For example, if a character occurs 3 times in all strings but not 4 times, you need to include that character three times in the final answer.
You may return the answer in any order.
"""


def helper(s):
    di = {}
    for ch in s:
        if ch in di.keys():
            di[ch]+=1
        else:
            di[ch] = 1
    return di

def sameKeys(di1,di2):
    keys1 = set(di1.keys())
    keys2 = set(di2.keys())
    return list(keys1.intersection(keys2))


def commonChars(A):

    cur = helper(A[0])

    for each in A:

        di = helper(each)
        li = sameKeys(cur,di)
        temp = {}
        for key in li:
            temp[key] = min(di[key],cur[key])
        cur = temp

    ans = ''
    for key in cur.keys():
        ans = ans + cur[key]*key
    return list(ans)



