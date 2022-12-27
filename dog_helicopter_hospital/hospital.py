class Hospital:
    def __init__(self, name: str, address: str, number_of_beds: int):
        self.name = name
        self.address = address
        self.number_of_beds = number_of_beds
        self.patients = []
        self.doctors = []
        self.nurses = []
        self.departments = []

    def admit_patient(self, patient):
        self.patients.append(patient)

    def discharge_patient(self, patient):
        self.patients.remove(patient)
    
    def add_doctor(self, doctor):
        self.doctors.append(doctor)
    
    def remove_doctor(self, doctor):
        self.doctors.remove(doctor)
    
    def add_nurse(self, nurse):
        self.nurses.append(nurse)
    
    def remove_nurse(self, nurse):
        self.nursed.remove(nurse)
    
    def add_department(self, department):
        self.departments.append(department)

if __name__ == "__main__":
    hospital = Hospital("Astxik", "Bangladsh", 600)
    print(type(hospital))

    hospital.add_department("Cardology")
    print(hospital.departments)
