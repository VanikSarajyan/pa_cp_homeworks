product_dict = {}
while(True):
    name = input("Enter name of the product (q if you're done): ")
    if(name == "q"):
        break
    if(name in product_dict):
        print(f"You already have {name} with price {product_dict[name]}$.")
        print("If you enter another price it will be changed.")
    price = input(f"Enter price for {name}: ")

    product_dict[name] = price

while(True):
    name = input("Enter a name to look up the price (q to quit): ")
    if(name == "q"):
        break
    if(name not in product_dict):
        print(f"No product with name {name}.")
    else:
        print(f"Price for {name} is {product_dict[name]}.")

