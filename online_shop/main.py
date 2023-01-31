from user import User
from address import Address
from product import Product
from cart import Cart

u1 = User("u1", "u1@gmail.com", "u", "1", "099", Address("Armenia", "Yerevan", "Yerevan", "Azatutyan Avenue 24/17", "0014"))
p1 = Product("IPhone 14", "IPhone 14 64GB", "/images_of_product_0/", 999)
p2 = Product("IPhone 15", "IPhone 14 64GB", "/images_of_product_1/", 999)
p3 = Product("IPhone 16", "IPhone 14 64GB", "/images_of_product_2/", 999)
c1 = Cart(u1, [p1, p2])
c1.add_to_cart(p3)
print(c1.get_products())
c1.remove_from_cart(p3)
print(c1.get_products())