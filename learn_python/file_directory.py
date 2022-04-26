# working with files and directory


from pathlib import Path

# we have Absolute path that define in whole of system
# example: C:\ProgramFile\Microsoft

# we have Relative path that define next to root project
# example: /user/local/bin

path = Path("work-with-file")
print(path.exists())


# this has error if path exists already
# path.mkdir()
# print(path.exists())

# this has error if path doesn't exist already
# path.rmdir()
# print(path.exists())

print(path.glob('*.py'))

print("-" * 30)

for file in path.glob("*.py"):
    print(file)

print("-" * 30)

for file in path.glob("*.*"):
    print(file)

print("-" * 30)

for file in path.glob("test1.*"):
    print(file)

print("-" * 30)

for file in path.glob("*"):
    print(file)









