items = []

def Stack(func):
    def wrapper(*args):
        print(f'Calling {func.__name__} of args.')
        return func(*args)
    return wrapper

@Stack
def push(el):
    items.append(el)

@Stack 
def pop():
    return items.pop()

@Stack 
def show():
    print(items)

@Stack 
def top():
    return items[-1]

@Stack
def isEmpty():
    return len(items) == 0

@Stack 
def size():
    return len(items)

@Stack
def clear():
    items.clear()



push(5)
push(0)

print(top())
show()
clear()
show()