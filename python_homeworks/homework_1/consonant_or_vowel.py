char = input('Enter a character: ')

while len(char) > 1 or not char.isalpha():
    char = input('Please enter a character: ')

vowels = ('a', 'e', 'i', 'o', 'u')

if char.lower() in vowels:
    print(char, 'is vowel.')
else:
    print(char, 'is consonant.')