def is_sorted(lst):
    asc = True
    desc = True
    for i in range(len(lst) - 1):
        if lst[i] <= lst[i+1]:
            desc = False
        else:
            asc = False
    
    return asc or desc

lst1 = [1,2,3,4,4]
lst2 = [1,2,6,4,4]
lst3 = [4,3,2,1]
lst4 = [4,3,6,1]

print(is_sorted(lst1))
print(is_sorted(lst2))
print(is_sorted(lst3))
print(is_sorted(lst4))
