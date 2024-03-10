def make(func):
    def made():
        print('hello ab sum is :' )
        func()
    return made
        
@make                                        #that are called make function firstly
def ord():
    print('that are: legend')                 #we try to access argument value but it not work

p=make(ord)                                  #rem-> is ord,,  not ord()
p()