# dictionary

abbas_data = {
    "Name": "Abbas Yazdanmehr",
    "Age": 19,
    "Sex": "Man",
    "Student": True,
    # "Name": "Ali Alavi", if uncomment this Name will be Ali Alavi
              }

print(abbas_data)

# error if doesn't have this key
print(abbas_data["Age"])

# no error if doesn't have this key
print(abbas_data.get("birth_day"))


abbas_data["Age"] = 20
print(abbas_data)

# example of using
phone = "9100322307a"
print(phone)
numbers = {
    "0": "zero",
    "1": "one",
    "2": "two",
    "3": "three",
    "4": "four",
    "5": "five",
    "6": "six",
    "7": "seven",
    "8": "eight",
    "9": "nine",
}
for i in phone:
    print(numbers.get(i, "not found in numbers dict"), end=' ')

print()

# emoji converting

message = "Python is very strange :/"
words = message.split(' ')

emojies = {
    ":)": "😀",
    ":(": "☹",
    ":|": "😐",
    ":/": "😑",
}


output = ''
for word in words:
    emoji = emojies.get(word, word)
    output += emoji + " "
print(output)
