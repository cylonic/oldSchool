#A2
#cs 301

def bub(x):
    n = len(x)
    #temp = 0
    #s = False
    count = 0
    while check_sorting_output(x) == False:
        for i in range(n-1):
           if x[i] > x[i+1]:
               temp = x[i]
               x[i] = x[i+1]
               x[i+1] = temp
               print "step: ", count, x
               count +=1
                
def check_sorting_output(x):
    '''determines if x is sorted or not'''
    #stolen from Lindzey!!!! heh heh
    i = 0
    n = len(x)
    while i < n-1:
        if x[i] > x[i+1]:
            return False
        i += 1
    return True                

z = [100, 50, 32, 0, -10, -100]
print "BUBBLE SORT\n"
print "unsorted: ", z
bub(z)
print "sorted:  ", z
