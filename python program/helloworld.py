# hello world.................
    # print('hello dear', end=" ")
    # print("ji sir")                         #"end are string appended after the last value, default a newline."
    
    # print('ayush', 'good', 'boy', sep="-")

#variable...................
    # a=12
    # print(a)


#bool..........................
    # # print(2>1)


#take input........................
    # a=input("Enter a number: ")
    # print("number is "+ a)


#size...........................
    # a=34      
    # b='23'
    # c='23.3'
    # d="ishu"
    # f=23.234
    # print( a ,"is type", type(a) )
    # print( b ,"is type", type(b) )
    # print( c ,"is type", type(c) )
    # print( d ,"is type", type(d) )
    # print( f ,"is type", type(f) )
    
    
#eval().................................
    # var=eval(input("enter number: "))
    # print(var)
    # print(type(var))


#address.........................................
    # a=2
    # print(a)
    # print(id(a))

    # b=3
    # print(b)
    # print(id(b))

    # c=2
    # print(c)
    # print(id(c))

#delete...........................................
    # var=34
    # print(var)

    # del var
    # print(var)
    
#length..............................................
    # var= 'hi every one'
    # print(var)
    # print(len(var))

#conversion...............................................
    # a=34      
    # b='23'
    # c='23.3'
    # a=float(a)
    # a=str(a)
    # b=int(a)
    # print( a ,"is type", type(a) )
    # print( b ,"is type", type(b) )      #error


# power.............................................
    # print(3**5)
    #print('abc'*4)
    # print('2' + '76')


#logical................................................
    # print(2==2 and 2==2)
    # print(3==2 or 2==2)
    # print( not (3==0))



#.........................................................................................................
#break
    # a=[3, 2.3, -23, 123, 21, -7]
    # for item in a:
    #    if item<=0:
    #        continue
    #    print(item)


# #continue   
    # a=[2.3, 23, -23, 32]
    # for item in a:
    #     if 0<=item:
    #         print(item)
        
    #     else:
    #         break

#pass
    # a=[3.2,23,23]
    # for ishu in a:
    #     pass
    # print(a)
#.................................................................................................................



#...............................................................................................................
#binary
    # bvar = 0b111
    # print(bvar)                      #they are all int type
    # print(type(bvar))

#octal
    # ovar=0o0011
    # print(ovar)
    # print(type(ovar))

#hexadecimal
    # hvar=0x0011
    # print(hvar)
    # print(type(hvar))
    
#float type
    # fvar=1.10e23
    # print(fvar)
    # print(type(fvar))

#complex type
    # cvar=2 + 4j                                 #real part can be write in binary but not imag
    # print(cvar)                                 #give error why!!!!!
    # print(type(cvar))
#......................................................................................................................


#.........................................................................................................................
#bitwise operator

#and bitwise (if both 1 then 1 else 0)
# print('and: ', 5 & 6)                  #by binary form
# 5 = 1 0 1
# 6 = 1 1 0
#   = 1 0 0       is 4

#bitwise or (if any 1 then 1 else 0)
# print('or: ', 5 | 6)
# 5 = 1 0 1
# 6 = 1 1 0
#   = 1 1 1       is 7

# ^ zor, sort if both same then output 0 else 1
# print("zor: ", 5 ^ 6)
# 5 = 1 0 1
# 6 = 1 1 0
#   = 0 1 1       is 3

# ~ complement 
# print("compliment: ", ~7 )         
#by complement foramula ~5 is -6,  ~7 = -8

# >> for right shift
# print("right bitwise: ", 15 >> 1)
# before 15   | 1 | 1 | 1 | 1 |  = 15
# after 15    |   | 1 | 1 | 1 |  = 7

# << for left shift
# print("left bitwise: ", 15 << 1)
# before 15       | 1 | 1 | 1 | 1 |  = 15
# after 15    | 1 | 1 | 1 | 1 | 0 |  = 30

#.....................................................................................................................


#....................................................................................................................
#special operator
# is ,   is not
# a = 12
# b = 12
# print(a is b, end=" ")
# print(a is not b)
# print (id(a), id(b), end="\n\n")
# b = 7
# print(a is b) 
# print(a is not b)
# print (id(a), id(b), end="\n\n")

# not ,  not in
# print ('h' in 'hello')              #remember it both are data is present in ( "" ) , variable you can define by without ''
# print ('o' not in "hello") 
#.............................................................................................................................