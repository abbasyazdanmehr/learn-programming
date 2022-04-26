# Arithmetic Operations
print(3 + 3)
print(4 - 3)
print(4 * 3)
print(4 / 3)
print(4 // 3)
print(10 % 3)
print(4 ** 3)

# Augmented Operations

x = 1
# x = x + 2
x += 2
print(x)


# Operator precedence
# precedence:
# ()
# exponentiation **
# multiplication and division * / //
# addition and subtraction + -

x = 10 + 2 * 2
print(x)

x = 10 + 2 * 2 ** 3
print(x)


# Logical Operators

is_username_valid = True
is_password_valid = False

is_valid = is_username_valid and is_password_valid
print(is_valid)
print(not not not not not not not is_valid)


is_cold = True
is_cloudy = True

is_rainy = is_cold or is_cloudy
print(is_rainy)


# comparison operators

temperature = 20

print(temperature > 10)
print(temperature < 10)
print(temperature == 21)
print(temperature != 22)
print(temperature <= 20)
print(temperature >= 20)
print()



