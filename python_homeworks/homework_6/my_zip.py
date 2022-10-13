def my_zip(l1, l2):
    m = len(l1)
    if len(l2) < len(l1):
        m = len(l2)
    return [(l1[i], l2[i]) for i in range(m)]

l1 = (1,2,3,4)
l2 = (5,6,7)
print(my_zip(l1,l2))
        