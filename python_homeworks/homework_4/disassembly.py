import dis

def myfunc(alist):
    return len(alist)

dis.dis(myfunc)
# line of code   instruction s                args   
#   4           0 LOAD_GLOBAL              0 (len)     pushes co_names[0] to stack
#               2 LOAD_FAST                0 (alist)   pushed ref of co_varnames[0] to stack
#               4 CALL_FUNCTION            1
#               6 RETURN_VALUE
#               ^
#       offset of instuctions

 # instruction code in binary
 # [opcode, arg, opcode, arg ...]
print(list(myfunc.__code__.co_code))


print('myfunc.__code__.co_names',myfunc.__code__.co_names)
print('myfunc.__code__.co_varnames', myfunc.__code__.co_varnames)