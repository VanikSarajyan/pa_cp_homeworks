L=[2,3,5,7,11,13,17,19,23,29,31,37,41,43,47]

# Without comprehension
# gaps = []

# for i in range(len(L) - 1):
#     gaps.append(L[i + 1] - L[i])

c_gaps = [L[i + 1] - L[i] for i in range(len(L) - 1)]

m = c_gaps[0]
gap_two = 0

for gap in c_gaps:
    if gap > m:
        m = gap
    if gap == 2:
        gap_two += 1

print(f"Max gap is {m}.")
print(f"Percentage of gaps that have size 2 is: {100 * gap_two // len(c_gaps)} %.")