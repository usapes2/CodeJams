"""
Given a string, find the length of the longest substring without repeating characters.
Example 1:  Input: "abcabcbb" Output: 3 Explanation: The answer is "abc", with the length of 3.
Example 2:  Input: "bbbbb" Output: 1 Explanation: The answer is "b", with the length of 1.
Example 3:  Input: "pwwkew" Output: 3 Explanation: The answer is "wke", with the length of 3. 
Note that the answer must be a substring, "pwke" is a subsequence and not a substring.
"""


def lengthOfLongestSubstring(s: 'str') -> 'int':
    if ( len(s) == 1 ):
        return 1

    di = {}
    start = -1
    curLen = 0
    globMax = 0
    ls = len(s)
    
    for ind,ch in enumerate(s):
        if ( ch in di.keys()) and (di[ch] > start ):
            start = di[ch]
        curLen = ind - start

        if curLen > globMax:
            globMax = curLen
        di[s[ind]] = ind

    curLen = ls - start - 1
    if curLen > globMax:
        globMax = curLen
        

    return globMax

            



print(lengthOfLongestSubstring('pwwkewabcdfgh'))
