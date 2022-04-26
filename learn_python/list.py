# list


names = ["Ali",
         "Abbas",
         "Mohammad"]
print(names)

print(names[1])
print(names[-1])
print(names[-2])
print(names[1:])
print(names[:4])
print(names[::-1])
print(names[::2])

print(names)

names[0] = "Ali Alavi"
print(names)


numbers = [
    1,
    2,
    4,
    10,
    100,
    20,
    25,
    24,
    34,
    74,
    92,
    34,
    21,
    5,
    12,
]

mux = -1000000
for number in numbers:
    if number > mux:
        mux = number
print(f'mux is {mux}')



# 2D list

matrix = [
    [1, 2, [2, 4, 5]],
    ["Ali", 5, False],
    [7, 8, True],
]

print(matrix)
print(matrix[0])
print(matrix[0][2:])

for row in matrix:
    for item in row:
        print(item, end=', ')

print()

# list methods

numbers = [5, 2, 3, 4, 2]

numbers.append(13)
print(numbers)

numbers.insert(1, 14)
print(numbers)

numbers.remove(2)
print(numbers)

numbers.remove(2)
print(numbers)

numbers.clear()
print(numbers)
print(type(numbers))

numbers = [3, 4, 5, 6]

numbers.pop()
print(numbers)

# index method has value error if index be out of bound
index = numbers.index(5)
print(index)

print(4 in numbers)
# in key word has no error
print(1 in numbers)

numbers = [1, 2, 3, 4, 2, 4, 2, 5, 6]

print(numbers.count(2))

# sort method is in place method (changes list)
print(numbers)
print(numbers.sort())
print(numbers)

# reverse is another in place method
print(numbers.reverse())
print(numbers)

# copy is very important method for lists
# changes in copy_numbers don't execute on original list
copy_numbers = numbers.copy()
print(copy_numbers)

copy_numbers.append(10)
print(numbers)
print(copy_numbers)

# if we don't use from copy method:
copy_numbers = numbers
copy_numbers.append(20)
print(numbers)
print(copy_numbers)
numbers.append(10)
print(numbers)
print(copy_numbers)

# remove duplicated in list
print(numbers)
removed_duplicated_numbers = []

for number in numbers:
    if number in removed_duplicated_numbers:
        continue
    removed_duplicated_numbers.append(number)
print(removed_duplicated_numbers)



