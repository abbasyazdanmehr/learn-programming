# class


class Point:
    def move(self):
        print("move in Point")

    def draw(self):
        print("draw in Point")

point1 = Point()
point1.move()
point1.draw()

point1.x = 0
point1.y = 2

print(point1.x)
print(point1.y)

point2 = Point()
point2.x = 10
print(point2.x)


class User:
    def __init__(self, name):
        print("This is constructor method")
        self.name = name


    def talk(self):
        print(f"{self.name} is talking Now!")


user1 = User("Abbas Yazdanmehr")
print(user1.name)

#
# class Dog:
#     def walk(self):
#         print("dog walks")
#
#
# class Cat:
#     def walk(self):
#         print("cat walks")


class Mammal:
    def walk(self):
        print("Mammal walks")


class Dog(Mammal):
    pass


class Cat(Mammal):
    pass


class Mouse(Mammal):
    def eat(self):
        print("Mouse eats")


dog1 = Dog()
dog1.walk()

mouse1 = Mouse()
mouse1.eat()
mouse1.walk()


print("End of Program")

