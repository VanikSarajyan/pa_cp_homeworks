import random

class Dog:
    def __init__(self, name: str, breed: str, age: int, color: str, weight: float, tricks: list = []) -> None:
        self.name = name
        self.breed = breed
        self.age = age
        self.color = color
        self.weight = weight
        self.tricks = tricks

    def make_sound(self) -> None:
        print("Bark!")

    def do_a_trick(self) -> None:
        if len(self.tricks) == 0:
            print("Can't do any tricks.")
        else:
            print(random.choice(self.tricks))
    
    def add_trick(self, trick: str) -> None:
        self.tricks.append(trick)

if __name__ == "__main__":

    julbas = Dog("Julbas", "Dvornyashka", 4, "black", 5.3)
    print(dir(julbas))
    print(type(julbas))
    print(isinstance(julbas, Dog))

    julbas.make_sound()
    julbas.do_a_trick()
    julbas.add_trick("tatiky tu")
    julbas.add_trick("sidet")
    julbas.add_trick("fas")
    julbas.do_a_trick()
    julbas.do_a_trick()



