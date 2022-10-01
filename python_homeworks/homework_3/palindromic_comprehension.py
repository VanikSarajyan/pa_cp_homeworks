def is_palindrome(number):
    return str(number) == str(number)[::-1]

L = [x for x in range(100, 1001) if is_palindrome(x)]

print(L)