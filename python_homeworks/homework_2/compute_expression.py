x = float(input("Enter x: "))
y = float(input("Enter y: "))

if x + y == 0:
    print("Can't divide by 0. ")
else:
    print(f"{abs(x-y) / (x + y):.2f}")