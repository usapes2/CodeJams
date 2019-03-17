'''

Execute a reduction function sum(),min(),max(), but first need to
transform or filter the data.

'''

# To calculate the sum of squares

nums = [1, 2, 3, 4, 5]
s = sum(x*x for x in nums)
print(s)


# Output a tuple as CSV
s = ('ACME', 50, 123.45)
print(','.join(str(x) for x in s))

li = [ 1, 2, 3, 4 , 5 ]

print(''.join(str(li)))
li.reverse()
print(''.join( str(x) for x in li))
st = 'hello'
st.reverse()
print(st)
