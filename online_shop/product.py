class Product:

    __id = 0

    def __init__(self, name: str, description: str, images: str, price: float) -> None:
        self.__id = Product.__id
        self.__name = name
        self.__description = description
        self.__images = images
        self.__price = price
        Product.__id += 1

    def get_id(self) -> int:
        return self.__id
    
    def get_name(self) -> str:
        return self.__name

    def set_name(self, name: str) -> None:
        self.__name = name

    def get_description(self) -> str:
        return self.__description

    def set_description(self, description: str) -> None:
        self.__description = description
    
    def get_images(self) -> str:
        return self.__images

    def set_images(self, images: str) -> None:
        self.__images = images

    def get_price(self) -> float:
        return self.__price

    def set_price(self, price: float) -> None:
        self.__price = price

    def __repr__(self) -> str:
        return f"Product {self.__id}"