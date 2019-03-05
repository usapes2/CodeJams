
def f(x):
    return 3*x + 1

# Anonymous Function = Lambda Expression
lambda x: 3*x + 1 # Can not use it like this, since it is anonymous
g = lambda x: 3*x + 1

print('f(x = 3) : ' + str(f(3)))
print('g(x = 3) : ' + str(g(3)))

full_name = lambda fn, ln: fn.strip().title() + ' ' + ln.strip().title()
print(full_name('         jOHN','Sapalen        '))

'''
lambda x_1, x_2, ... , x_n: <expression>
note: it's perfectly fine to have no input expressions
'''
l = lambda :print('What is my purpose?')

lambda x: 3*x + 1
lambda x, y: (x*y)**0.5 # Geometric Mean
lambda x, y, z: 3/(1/x + 1/y + 1/z) # Harmonic Mean


# Sort list of scifi_authors by their last name
scifi_authors = ['Isaac Asimov', 'Ray Bradbury', 'Robert Heinlein', 'Arthus C. Clarke','Douglas Adams']
gg = lambda name: name.split(' ')[-1].lower()
scifi_authors.sort(key = gg)
print ( scifi_authors)


def build_quadratic_function(a,b,c):
    '''Returns the function f(x) = ax^2 + bx + c'''
    return lambda x: a*x**2 + b*x + c
f = build_quadratic_function(1,2,3)
print(f(1))


print(build_quadratic_function(3,0,1)(2))










