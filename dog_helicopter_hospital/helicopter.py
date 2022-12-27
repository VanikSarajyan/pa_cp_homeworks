class Helicopter:
    def __init__(self, mark: str, model: str, year: int, weight: float, capacity: float, n_passengers: int) -> None:
        self.mark = mark
        self.model = model
        self.year = year
        self.weight = weight
        self.capacity = capacity
        self.n_passengers = n_passengers
        self.pilot = None
        self.locatin = None
    
    def set_pilot(self, pilot: int):
        self.pilot = pilot
    
    def fly(self):
        if self.pilot:
            print("Taking off...")
        else:
            print("Can't fly without pilot.")


if __name__ == "__main__":
    helicopter = Helicopter("Boeing", "Apache Guardian", 3500, 2018, 6700, 8)
    print(type(helicopter))

    helicopter.fly()
    helicopter.set_pilot(7007)
    helicopter.fly()


