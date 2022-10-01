1. Write a program that allows the user to enter five numbers (read as strings). Create a string that consists of the user’s numbers separated by plus signs. For instance, if the user enters 2, 5, 11, 33, and 55, then the string should be ‘2+5+11+33+55’.
2. Write a program that gets a string from the user containing a potential telephone number. The program should print Valid if it decides the phone number is a real phone number, and Invalid otherwise. A phone number is considered valid as long as it is written in the form abc-def-hijk or 1-abc-def-hijk. The dashes must be included, the phone number should contain only numbers and dashes, and the number of digits in each group must be correct. Test your program with the output shown below.
Enter a phone number: 1-301-447-5820
Valid
Enter a phone number: 301-447-5820
Valid
Enter a phone number: 301-4477-5820
Invalid
Enter a phone number: 3X1-447-5820
Invalid
Enter a phone number: 3014475820
Invalid
3. Use a list comprehension to produce a list that consists of all palindromic numbers between 100 and 1000.
4. Let L=[2,3,5,7,11,13,17,19,23,29,31,37,41,43,47]. Use a list comprehension to produce a list of the gaps between consecutive entries in L. Then find the maximum gap size and the percentage of gaps that have size 2.
5. Write a program that repeatedly asks the user to enter product names and prices. Store all of these in a dictionary whose keys are the product names and whose values are the prices. When the user is done entering products and prices, allow them to repeatedly enter a product name and print the corresponding price or a message if the product is not in the dictionary.
6. Dictionaries provide a convenient way to store structured data. Here is an example dictionary:
di = [{'name':'Todd', 'phone':'555-1414', 'email':'todd@mail.net'}, 
{'name':'Helga', 'phone':'555-1618', 'email':'helga@mail.net'}, {'name':'Princess', 'phone':'555-3141', 'email':''}, 
{'name':'LJ', 'phone':'555-2718', 'email':'lj@mail.net'}]
Write a program that reads through any dictionary like this and prints the following:
(a) All the users whose phone number ends in an 8
(b) All the users that don’t have an email address listed
7. Create a 5 × 5 list of numbers. Then write a program that creates a dictionary whose keys are the numbers and whose values are the how many times the number occurs. Then print the three most common numbers.