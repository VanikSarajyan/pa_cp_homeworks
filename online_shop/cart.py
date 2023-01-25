from product import Product
from user import User

class Cart:

    __id = 0

    def __init__(self, user: User, products:list[Product] = []) -> None:
        self.__id = Cart.__id
        self.__user = user
        self.__products = products
        Cart.__id += 1

    def get_id(self) -> int:
        return self.__id
    
    def get_products(self) -> list[Product]:
        return self.__products
    
    def get_user(self) -> User:
        return self.__user

    def add_to_cart(self, product: Product) -> None:
        self.__products.append(product)
    
    def remove_from_cart(self, product: Product) -> None:
        if product in self.__products:
            self.__products.remove(product)