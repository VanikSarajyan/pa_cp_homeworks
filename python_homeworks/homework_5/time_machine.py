from hashlib import new


hour = int(input("Enter an hour: "))
m = int(input("am(1) or pm(2)?: "))
ahead = int(input("How many hours ahead?: "))

if hour <= 12 and (m == 1 or m == 2):
    m -= 1
    new_hour = (hour + ahead) % 12
    m += ((hour + ahead) // 12 ) % 2
    period = "am" if m % 2 == 0 else "pm"
    print(f"New hour: {new_hour} {period}")
else:
    print("Invalid input.")
