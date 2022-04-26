import random

for i in range(3):
    print(random.random())


team_members = ["Ali", "Mohammad", "Abbas"]

leader = random.choice(team_members)
print(leader)


class Dice:
    def roll(self):
        first = random.randint(1, 6)
        second = random.randint(1, 6)
        return first, second # this return a tuple


dice1 = Dice()
print(dice1.roll())
