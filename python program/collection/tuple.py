a=(1, 2, 3, 4, 5, 3,)           #rem-> in last ,comma
x=input("enter no...")
if x=='1':
    #print
    print(a)
    
elif x=='2':
    #change, del item
    a[2]=34 
    del a[1]                    #give error because in tuple not change and delete item
    print(a)

elif x=='3':
    #using operator
    print(a+ (23, 34))            #it is immutable then it not change and append in this add by manual
    print(a*(2))
    
elif x=='4':
    #count
    print(a.count(3))
    
elif x=='5':
    #index
    print(a.index(4))
    
else:
    print('invalid')
    
    
    

