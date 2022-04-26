# functions


# print_menu() has error here

def print_menu():
    print("-----------------------")
    print("|         Menu        |")
    print("|---------------------|")
    print("| 1. Play Game!       |")
    print("| 2. See leader boards|")
    print("-----------------------")


print_menu()


def print_greeting(name):
    print("Hello ", name)


print_greeting("Abbas")
print_greeting("Ali Alavi")


def print_greeting(first_name, last_name):
    print("Hello", first_name, last_name)

print_greeting("Abbas", "Yazdanmehr")
# python doesn't support different sign function by parameters
# and changes the method after finding new function by same name
# and different parameters
# print_greeting("Abbas") has error!


print_greeting(last_name="Alavi", first_name="Ali")

# print_greeting("Alavi", first_name="Ali") this has error
# first use from positional argument and then use key word argument

print_greeting("Ali", last_name="Alavi")

print()


def add_2_numbers(a, b):
    return a + b


def square(a):
    return a * a


def print_square(a):
    print(a * a)

print(add_2_numbers(2, 3))
print(square(64))
print(print_square(64))

# by default all functions return the value None (return None)









