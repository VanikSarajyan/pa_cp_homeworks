l1 = [1,3,5,7,8,9,10]
l2 = [-1,2,4,6]

def merge_sorted_lists(l1,l2):
    merged = []
    i = 0
    j = 0

    while i < len(l1) and j < len(l2):
        if l1[i] <= l2[j]:
            merged.append(l1[i])
            i += 1
        else:
            merged.append(l2[j])
            j += 1
    
    while i < len(l1):
        merged.append(l1[i])
        i += 1

    while j < len(l2):
        merged.append(l2[j])
        j += 1

    return merged

print(merge_sorted_lists(l1,l2))