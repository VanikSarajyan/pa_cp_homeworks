from address import Address
from helpers import valid_username, valid_email, valid_first_name, valid_last_name, valid_address, valid_phone

class User:

    __id = 0

    def __init__(self, username: str, email: str, first_name: str, last_name:str, phone: str, address: Address) -> None:
        self.__id = User.__id
        self.set_username(username)
        self.set_email(email)
        self.set_first_name(first_name)
        self.set_last_name(last_name)
        self.set_phone(phone)
        self.set_address(address)
        User.__id += 1
    
    def get_id(self) -> int:
        return self.__id

    def get_username(self) -> str:
        return self.__username

    def set_username(self, username: str) -> None:
        if valid_username(username):
            self.__username = username
        else:
            raise ValueError(f"{username} is not a valid username.")

    def get_email(self) -> str:
        return self.__email

    def set_email(self, email: str) -> None:
        if valid_email(email):
            self.__email = email
        else:
            raise ValueError(f"{email} is not a valid email.")

    def get_first_name(self) -> str:
        return self.__first_name

    def set_first_name(self, first_name: str) -> None:
        if valid_first_name(first_name):
            self.__first_name = first_name
        else:
            raise ValueError(f"{first_name} is not a valid first_name.")

    def get_last_name(self) -> str:
        return self.__last_name

    def set_last_name(self, last_name: str) -> None:
        if valid_last_name(last_name):
            self.__last_name = last_name
        else:
            raise ValueError(f"{last_name} is not a valid last_name.")

    def get_phone(self) -> str:
        return self.__phone
    
    def set_phone(self, phone: str) -> None:
        if valid_phone(phone):
            self.__phone = phone
        else:
            raise ValueError(f"{phone} is not a valid phone number.")

    def get_address(self) -> Address:
        return self.__address

    def set_address(self, address: Address) -> None:
        if valid_address(address):
            self.__address = address
        else:
            raise ValueError(f"{address} is not a valid address.")


if __name__ == "__main__":

    u1 = User("u1", "u1@gmail.com", "u", "1", "099", Address("Armenia", "Yerevan", "Yerevan", "Azatutyan Avenue 24/17", "0014"))
    u2 = User("u2", "u2@gmail.com", "u", "2", "099", Address("Armenia", "Yerevan", "Yerevan", "Azatutyan Avenue 24/17", "0014"))
    u3 = User("u3", "u3@gmail.com", "u", "3", "099", Address("Armenia", "Yerevan", "Yerevan", "Azatutyan Avenue 24/17", "0014"))
    print(u1.get_id())
    print(u2.get_id())
    print(u3.get_id())
    print(u1.get_username())
    print(u1.get_address())
