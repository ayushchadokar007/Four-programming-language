def ayush():
    n=1
    print('hello')
    yield n
    
    n+=1
    print('hi')
    yield n
    
a=ayush()
a()
