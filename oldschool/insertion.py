#A2
#cs 301

def s(x):
    for i in range(1, len(x)):
        u=i    
        while u > 0 and x[u-1] > x[u]:
                temp = x[u]
                x[u] = x[u-1]
                x[u-1] = temp
                u = u-1



y = [100, 50, 30, 10, 5, 1, -100, 0]
#print "INSERTION SORT\n"
#print "unsorted: ", y
#s(y)
#print "sorted:   ", y
