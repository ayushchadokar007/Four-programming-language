a={ 1: 'ayush', 2: 34, 3: 2.3, 4: 11}
x=input('enter number')

#print, access, get................
if x=='1':
    #print
    print(a)
    
elif x=='2':
    #access
    for i in a:
        print(a[4])                   #value
        print(i)                      #print key
        break
    
elif x=='3':
    #use get
    #print(a[5])                      #give error because 5 key is not present   
    print(a.get(5))                   #without error give none
    
elif x=='4':
    #change
    a[1]=22                           #assign,  change,  update value
    print(a[1])


#delete method........................................................    
elif x=='5':
    #delete
    del a[3]
    print(a)
    
elif x=='6':
    #pop
    print(a.pop(1))                   #print value of 1
    print(a)                          #remove key value and print all
    
elif x=='7':
    #clear
    print(a.clear())
    
#
elif x=='8':
    print(a.remove(4))
    
