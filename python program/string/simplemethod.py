a='hello', 'ayush', 'ishu', 'viraj', 'siddharth'
x=input("enter number: ")
#methos.....................................................
if x=='6':
    #format()
    channel_name= "the legendary sanen"
    a, b= 3, 6
    ab= f"learning python : { channel_name }"                 #format print solve the problem
    ac= f"the sum of... : { a+b }" 
    print(ab)
    print(ac)
   
elif x=='7':
    #raw()
    ar= r"the sum are two no.. { 2 + 5 }"                      #raw print exatly 
    print(ar)
    
elif x=='8':
    #lower()
    a="HEllo"
    c=a.lower()             
    print(c)
    
elif x=='9':
    #upper()
    a="heloo"
    c=a.upper()
    print(c)    
    
elif x=='10':
    #join()
    b='samrath', 'rck'
    c='='.join(b)                                           #change , (sign) in our requrement
    print(c)
    
elif x=='11':
    #split
    a="the  legendry , sanen naruto, usumaki"
    ab=a.split(',')                               #don't give correct answer 
    print(ab)
    print(type(ab))
    
elif x=='12':
    #find()
    a="the legendary sanen viraj are great"
    a=a.find('viraj')                                       #give position
    b=a.find('i', 15, -1)
    print(a)
    print(b)                                     #give error
    
elif x=='13':
    #index()
    a='are yor joking me here is strong'
    a=a.index('r' , 2, 7)                                   #theroy in index give error when pattern not found but find not give
    print(a)                                     #give error 
    
    
elif x=='14':
    #replace
    a='ayush is good boy'
    ab=a.replace('ayush', 'samrath') 
    print(ab)                                               #replace pattern
 