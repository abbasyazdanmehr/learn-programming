# strings

name = "Abbas Yazdanmehr"

name = "Abbas\'Yazdanmehr"
print(name)

name = "Abbas'Yazdanmehr"
print(name)

name = "Abbas\"Yazdanmehr"
print(name)

name = 'Abbas"Yazdanmehr'
print(name)

name = "Abbas\\Yazdanmehr"
print(name)


name = "Abbas Yazdanmehr"
print(name[0])
print(name[-1])
print(name[0:3])
print(name[2:])
print(name[:8])
print(name[-1:])
print(name[::2])
print(name[::-1])
print(name[7:3])
print(name[7:3:-1])
# print(name[100]) this is error my friend
print(name[1:-1])


# formatted string
first = 'John'
last = 'Smith'
sentence = first + " " +  last + "is bad Coder"
print(sentence)

formatted_sentence = f'{first} {last} is bad Coder'
print(formatted_sentence)


# string methods
study = 'Mathematics'
print(len(study))
print(study.upper())
print(study.lower())
print(study.title())
print(study.find('M'))
print(study.find('A'))
print(study.find('Ma'))
print(study.find('ab'))
print(study.replace('t', 'p'))
print(study.replace('Ma', 'Sa'))
print(study)
print('Math' in study)
print('Physics' in study)



