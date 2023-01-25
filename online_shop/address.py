class Address:

    __id = 0

    def __init__(self, country: str, region: str, city: str, address_line:str, zip: str) -> None:
        self.__id = Address.__id
        self.__country = country
        self.__region = region
        self.__city = city
        self.__address_line = address_line
        self.__zip = zip
        Address.__id += 1
    
    def get_id(self) -> int:
        return self.__id

    def get_country(self) -> str:
        return self.__country

    def set_country(self, country: str) -> None:
        self.__country = country

    def get_region(self) -> str:
        return self.__region

    def set_region(self, region: str) -> None:
        self.__region = region

    def get_city(self) -> str:
        return self.__city

    def set_city(self, city: str) -> None:
        self.__city = city
    
    def get_address_line(self) -> str:
        return self.__address_line

    def set_address_line(self, address_line: str) -> None:
        self.__address_line = address_line

    def get_zip(self) -> str:
        return self.__zip

    def set_zip(self, zip: str) -> None:
        self.__zip = zip