#A2
#cs 301

def select(x):
    n = len(x)
    for i in range(n-1):
        min = i
        for j in range (i+1, n):
            if x[min] > x[j]:
                min = j
        temp = x[min]
        x[min] = x[i]
        x[i] = temp
        print "step    ", i+1, x


z = [ 692, 1, 32, 14, 15, 123, 2431]
#print "SELECTION SORT\n"
#print "unsorted: ", z
select(z)
print "sorted:   ", z
