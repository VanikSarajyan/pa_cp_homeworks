def foo(*args):
    print(type(args)) # <class 'tuple'>
    print(args)

def bar(**kwargs):
    print(type(kwargs)) # <class 'dict'>
    print(kwargs)

l = [1,2,3]
d = {'a': 1, 'b': 2}
foo() # ()
foo(1) # (1,)
foo(1,2,3) #(1,2,3)
foo('ABC') # ('ABC',)
foo(l) # ([1,2,3], )
foo(*l) # (1,2,3)
foo(*d) # ('a', 'b')

bar()
# bar(d) E: bar takes 0 pos args
# bar(*d) E: ^
bar(**d) # {'a':1, 'b': 2}

def kwonly(a, b = 5, *c, d, **e):
    print(a,b,c,d,e)

kwonly(1, 10, *l, d = 'd', **{'e': 1}) #1 10 (1, 2, 3) d {'e': 1}
