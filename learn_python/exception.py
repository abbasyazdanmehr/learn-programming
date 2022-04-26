# handling error in python program

age = 0
try:
    age = int(input('Age: '))
    age_reverse = 1 / age
except ValueError:
    print('You should enter a number')
except:
    print('Something is wrong')
# except by alone handle all exception and doesn't know type of error
# for example in this try/except it can catch division by zero exception
# that has not cached in except ValueError

print(f'your age is {age}')







