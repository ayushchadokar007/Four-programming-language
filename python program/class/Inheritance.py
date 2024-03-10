class ayush:
    a=12
    def __init__(self, aa, bb):
        self.x= aa
        self.y= bb
        
    def write(self):
        print(self.x, self.y)
        
class ishu (ayush):
    pass                                             #pass likhna jaruri hai
    #print(a)                                       #get error, in drived class there are not inherit they not found a
    
ji=ishu(22, 11)
ji.write()
print(ji.x, ji.y)