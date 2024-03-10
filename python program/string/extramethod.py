a='hello', 'ayush', 'ishu', 'viraj', 'siddharth'
x=input("enter number: ")

#extra method..........................
if x=='15':
    #count
    a='hello my dear oyo hotel ke manager'
    a=a.count('o')
    print(a)
    
elif x=='16':
    #strip
    a='he      my dear oyo hotel ke manager      '
    a=a.strip('o')                                           #remove space only start and ending pint
    print(a)
    
elif x=='17':
    #title
    a="hello sir kaise hai app"
    a=a.title()                                              #convert capital only first letter
    print(a)
    
elif x=='18':
    #capitalize
    a="hello sir kaise hai app"
    print(a.capitalize())
    
elif x=='19':
    #range
    ran=range(10, 20, 2)
    for i in ran:
        print(i)
        


