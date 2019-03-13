
# Performing various calculations(min value, max value, sorting on dictionary )

prices = {
        'ACME': 45.23,
        'AAPL': 612.78,
        'IBM': 205.55,
        'HPQ': 37.20,
        'FB': 10.75
        }


''' In order to perfor useful calculations on the dictionary contents, 
it is often useful to invert the keys and values of the dictionary using
zip().
For example, here is how to find the minimum and maximum price and stock name:
'''


min_price = min(zip(prices.values(), prices.keys()))
print(type(min_price))
print(min_price)
print('Doing same with lambda functions')
min_value = prices[min(prices, key = lambda k: prices[k])]
print(min_value)


max_price = max(zip(prices.values(), prices.keys()))
print(type(max_price))
print(max_price)

prices_sorted = sorted(zip(prices.values(), prices.keys()))
print(prices_sorted)

