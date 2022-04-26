# tuple
# tuple just gives information and have no permission for changing

numbers = (1, 2, 3, 2, 2)

print(numbers[0])
print(numbers.count(2))
print(type(numbers))
# numbers[1] = 10 is error

coordinate = (4, 2, 1)
x, y, z = coordinate

print(x, y, z)      # this is not tuple
print((x, y, z))    # this is tuple


