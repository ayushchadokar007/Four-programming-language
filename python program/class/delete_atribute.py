class ayush:
    def __init__(self, p=0, q=0):
        self.a=p
        self.b=q
        
        
aa=ayush(2, 5)
print(aa.a, aa.b)

del aa.b
print(aa.a)
# print(aa.b)                               #give error beacause it was deleted argument
