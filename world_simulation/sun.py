import time
class Sun:
    def __init__(self, shines = True, rise_time: int = 12, set_time: int = 12) -> None:
        self._rise_time = rise_time
        self._set_time = set_time
        self._set_start = 0
        self._rise_start = 0
        if shines:
            self.rise()
        else:
            self.set()
    
    def rise(self) -> None:
        self._rise_start = time.perf_counter()
        self._shines = True
    
    def set(self) -> None:
        self._set_start = time.perf_counter()
        self._shines = False
    
    def is_shining(self) -> bool:
        return self._shines
    
    def update_status(self) -> None:
        if self.is_shining():
            if time.perf_counter() - self._rise_start >= self._rise_time:
                self.set()
        else:
            if time.perf_counter() - self._set_start >= self._set_time:
                self.rise()
    
    def print_status(self):
        if self.is_shining():
            print(f"Sun is shining for {time.perf_counter() - self._rise_start:.0f} seconds.")
        else:
            print(f"Sun is set for {time.perf_counter() - self._set_start:.0f} seconds")

