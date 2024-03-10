def ayush(x):
    def ishu(y):
        print(x, y)
    return ishu

a=ayush(4)
b=ayush(8)                     #call both by base class ayush,    not ishu

# a(b(2))                      #that wrong in syntax it don't call
print(a(b(2)))                  #it is 2 is imp it y value