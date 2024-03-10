#switch
op=input("Enter the operator")
a, b = 3, 6

if op=='+':
    print("sum: ", a+b)
elif op=='-':
    print("subtraction: ", a-b)
elif op=='*':
    print("multiple: ", a*b)
elif op=='/':
    print('divided: ', a/b)
elif op=='%':
    print('remainder: ', a%b)
else:
    print('invalid operator..')