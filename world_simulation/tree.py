from air import Air
from sun import Sun

class Tree:
    def produce_air(self, air: "Air", sun: "Sun") -> None:
        if sun.is_shining():
            air.increase(3)
