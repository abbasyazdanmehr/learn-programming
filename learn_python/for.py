# for loop statement

def seperator():
    print("*" * 30)

for char in 'Abbas Yazdanmehr':
    print(char)

seperator()

for name in ['Ali', 'Reza', 'Mohammad', 'Fatemeh']:
    print(name)

seperator()

for i in range(10):
    print(i)

seperator()

for i in range(12, 20, 2):
    print(i)

prices = [10, 20, 40, 50]
sum = 0
for price in prices:
    sum += price

print("sum is", sum)



# nested loop

for x in range(5):
    for y in range(5):
        print(f'({x}, {y})')


