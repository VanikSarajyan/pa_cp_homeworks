from numpy import number


phone_number = input("Enter a phone number: ")


def valid_phone_number(phone_number):

    phone_number = phone_number.strip()
    number_split = phone_number.split('-')
    dashes_removed = phone_number.replace('-', '')
    
    if not dashes_removed.isdecimal():
        return False
    if len(number_split) == 3:
        if (len(number_split[0]) != 3 or
            len(number_split[1]) != 3 or
            len(number_split[2]) != 4):

            return False
    elif len(number_split) == 4:
        if (len(number_split[0]) != 1 or
            len(number_split[1]) != 3 or
            len(number_split[2]) != 3 or
            len(number_split[3]) != 4):

            return False
    else:
        return False

    return True



print("Valid") if valid_phone_number(phone_number) else print("Invalid")
