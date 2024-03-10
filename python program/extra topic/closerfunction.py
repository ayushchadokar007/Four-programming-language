#nested function 
def ayush(a, b):
    def sum():
        print('sum: ', a+b)
    return sum

a=ayush(4, 6)
a()                               # I don't known why function store in a ,   without a not calling