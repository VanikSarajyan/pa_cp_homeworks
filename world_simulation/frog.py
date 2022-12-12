from grass import Grass
from air import Air
from sun import Sun

class Frog:
    def __init__(self) -> None:
        self._asleep = False
        self._fed = 0

    def move(self) -> None:
        print("Moves")
    
    def eat(self, grass: "Grass") -> None:
        if not self.is_sleeping():
            self._fed += grass.give_grass()
    
    def breathe(self, air: "Air") -> None:
        air.decrease()

    def sleep_update(self, sun: "Sun") -> None:
        if sun.is_shining():
            self._asleep = False
            self._fed -= 0.5
        else:
            self._asleep = True
            self._fed = 0
    
    def is_sleeping(self) -> bool:
        return self._asleep

    def print_status(self) -> None:
        if self.is_sleeping():
            print("Frog is sleeping")
        else:
            print("Frog is awake")
        print(f"It is fed by {self._fed} points")
