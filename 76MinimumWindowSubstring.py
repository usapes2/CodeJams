#Given a string S and a string T ( of distinct char ), find the minimum window in S which will contain all the characters in T in complexity O(n).


def minWindow(s: 'str', t: 'str') -> 'str':

    T = {}
    l = 0
    r = 0 
    curStr = s
    minStr = s


    ind = 0 
    while ( ind < len(s)):
        ch = s[ind]

        print("character: " + ch +" at postiiton " + str(ind))
        if ch in t:
            T[ch] = ind
            print("\ncur state of the T ")
            print(T)

        # find the minimum by comparing the second element of each tuple >>> 

        if (len(T) == len(t)) :
            l = min(T.items(), key=lambda x: x[1])
            r = max(T.items(), key=lambda x: x[1])

            
            curStr = s[ l[1]:r[1] +1 ]
            print("\ncurrent string: " + curStr)
            print("\ncurrent minstring: " + minStr)

            if len(curStr) < len(minStr):
                minStr = curStr
                print('\nUpdated')

            print("\ncurrent string: " + curStr)
            print("\ncurrent minstring: " + minStr)
            
            print("\nbefore")
            print(T)
            del T[l[0]]
            print("\after")
            print(T)

            ind = (min(T.items(), key=lambda x: x[1]))[1]

            continue

        ind+=1

    return minStr

print( "ANSWER " + str(len(minWindow('bbaa', 'aba'))))

