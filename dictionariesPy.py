my_dict = {"key1":"val1","key2":"val2","key3":"val3"}

# Iterate over dictionary

for key,val in my_dict.items(): # calling method
    print(key + "---" + val)

# Iterate over a list, print indexes as well

my_list = [1,2,3,4,5]

for index, value in enumerate(my_list):
    print("index :" + str(index) + "   " + str(value))
    

# Iterate over numpay array

import numpy as np

my_array_np = np.array(my_list)
my_array_np2 = np.array([10,11,12,14,15])
my_2d_np = np.array([my_array_np,my_array_np2])

for each in my_2d_np:
    print(each)
    

# to print all elements of 2d array 
li = []
for each in np.nditer(my_2d_np): # calling a function np.nditer
    print(each)
    li.append(each)

print("This is what we got after \n")
print(li)
for item in li:
    print(item)
print(type(li))
li2=[]
print(type(li2))

# Iterations in DataFrames

import pandas as pd
dict = { 1:["Brazil","Brasilia"],
        2:["Russia","Moscow"] }
df = pd.DataFrame(dict)
df.index = [ "BR","RU"]

# This doesn't make sence
for item in df:
    print(item)
print("-------------------------")
for lab,row in df.iterrows():
    print(row)
    print(lab)

# Use apply to do smth with DF columns

print("#################################")
df["New Col"] = df.iloc[:,1].apply(len)
print(df)

