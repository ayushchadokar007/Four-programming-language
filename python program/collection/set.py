a={1, 2, 3, 4, 5, 2}
b={3, 4, 5}
x=input("enter number")
if x=='1':
    #print
    print(a)
    
elif x=='2':
    #remove
    print(a.remove(1))
    
elif x=='3':
    #discard
    v=a.discard(3)
    print(v)
    
elif x=='4':
    #pop
    print(a.pop(2))                          #give error why!!!!
    print(a)
    
elif x=='5':
    #clear
    z=a.clear()
    print(z)
    
elif x=='6':
    #update
    print(a.update([3, 5]))
    
elif x=="7":
    #add
    print(a.add(4))
    
elif x=='8':
    #union
    print(b.union(a))                #without duplicate |

elif x=='9':
    #intersection
    print(b.intersection(a))         #both on duplicate &
    
elif x=='10':
    #difference
    print(a.difference(b))            #a-b
    
elif x=='11':
    #symeteric_difference
    print(a.symmetric_difference(b))      #without duplicate print a b all value ^
 



   