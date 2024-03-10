import math
x=input('enter number: ')

if x=='1':
    #power
    a=math.pow(3, 3)
    print(a)
    
elif x=='2':
    #square
    a=math.sqrt(25)
    print(a)
    print(type(a))
    
elif x=='3':
    #pi
    print(math.pi)
    
elif x=='4':
    #e
    print(math.e)
    
elif x=='5':
    #sin()                             #radian
    print(math.sin(x))                 #get error
    
elif x=='6':
    #dir()
    print(dir(math))                   #get all file name contain in math
