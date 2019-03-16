
prices = {
        'ACME': 45.23,
        'AAPL': 612,
        'IBM': 205,
        'HPQ': 37.2,
        'FB' : 10
        }

# Make a dictionary of all prices over 200

p1 = { key : value for key, value in prices.items() if value > 200}

print(p1)

# Make a dictionary of teck stocks

teck_names = {'AAPL', 'IBM','HPQ','MSFT'}
p2 = {key:value for key,value in prices.items() if key in teck_names}
