class Air:
    def __init__(self, volume: int = 100) -> None:
        self._volume = volume
    
    def increase(self, volume: int = 1) -> None:
        self._volume += volume
    
    def decrease(self, volume: int = 1) -> None:
        if self._volume >= volume:
            self._volume -= volume
        else:
            raise ValueError("Air volume can't be negative.")
    
    def get_volumne(self) -> int:
        return self._volume
    
    def print_status(self) -> None:
        print(f"Air volume is: {self.get_volumne()}")