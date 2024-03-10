a='hello'
a="hello"

a='''heloo'''
a=" " " helpp " " "

a= "he said what's reason"
a= "he said what\'s reason"
a= 'he said what\'s reason'

a='he said \" what\'s " reason'

print(a)
print("\b", a)

a=("hello")
print(a[-1])

a='hello', 'ayush', 'ishu', 'viraj', 'siddharth'
x=input("enter number: ")
#print access.................
if x=='1':
    #print
    print(a)
    
elif x=='2':
    #access
    print(a[2])
    
elif x=='3':
    #slicing
    print(a[2: 5])
    print(a[0: 5: 2])                        #start: end: step(jumping)   jump is by default 1
    
elif x=='4':
    #substring, for loop
    for ig in a:
        print(ig)
        print('ishu' in a)
        break
    
elif x=='5':
    #del
    del a[1]
    print(a)                                        #give error
