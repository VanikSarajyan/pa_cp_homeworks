from sun import Sun

class Grass:
    def __init__(self, quantity: int = 100) -> None:
        self._quantity = quantity
    
    def give_grass(self, quantity: int = 1) -> int:
        if self._quantity >= quantity:
            self._quantity -= quantity
            return quantity
        else:
            raise ValueError("Can't eat more grass than exists.")

    def grow(self, sun: "Sun") -> None:
        if sun.is_shining():
            self._quantity += 2

    def get_quantity(self) -> int:
        return self._quantity

    def print_status(self) -> None:
        print(f"Grass quantity is: {self.get_quantity()}")