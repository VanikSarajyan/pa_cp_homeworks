users = [{'name':'Todd', 'phone':'555-1414', 'email':'todd@mail.net'}, 
{'name':'Helga', 'phone':'555-1618', 'email':'helga@mail.net'},
 {'name':'Princess', 'phone':'555-3141', 'email':''}, 
{'name':'LJ', 'phone':'555-2718', 'email':'lj@mail.net'},
{'name':'Princess', 'phone':'555-3141'}]

a = []
b = []

for user in users:
    if "phone" in user:
        if user["phone"][-1] == "8":
            a.append(user)
    if "email" in user:
        if user["email"] == "":
            b.append(user)
    else:
        b.append(user)

print("Users with phone numbers ending in 8.", a, sep="\n")
print("Users who don't have email listed.", b, sep="\n")