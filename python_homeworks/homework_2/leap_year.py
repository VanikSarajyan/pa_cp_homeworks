year = int(input("Enter a year: "))

passed = year - 1600

print(f"There has been {passed // 4 + passed // 400 - passed // 100} leap years since 1600.")