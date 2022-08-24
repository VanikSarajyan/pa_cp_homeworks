x = int(input())
y = int(input())
z = int(input())
a = int(input())

if x + y + z + a == 0:
    m = x    
    if y < m:
        m = y
    if z < m:
        m = z
    if a < m :
        m = a
    
    print(m)