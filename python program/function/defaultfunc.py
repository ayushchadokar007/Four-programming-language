#default argument
# parameter is already assign

def a(name, age=23):
    print(name, age)
    
a('ayush')


#arbitrary
def a(*num):
    print(num)
    
a(23, 53, 'ayush')