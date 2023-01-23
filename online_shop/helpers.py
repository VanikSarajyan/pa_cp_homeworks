from address import Address

def valid_username(username) -> bool:
    #TODO check for uniqueness
    return 0 < len(username) < 20

def valid_email(email) -> bool:
    #TODO check for uniqueness and format
    return 0 < len(email) < 20

def valid_first_name(first_name) -> bool:
    return 0 < len(first_name) < 20

def valid_last_name(last_name) -> bool:
    return 0 < len(last_name) < 20

def valid_address(address: Address) -> bool:
    return True