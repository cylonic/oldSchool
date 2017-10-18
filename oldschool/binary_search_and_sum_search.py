def bin_search(x, key, lo, hi):
    while hi >= lo:
        mid = (lo+hi)/2
        if x[mid] < key:
            lo = mid + 1
        elif x[mid] > key:
            hi = mid - 1
        else:
            return x[mid]
    return False

def isSum(x, z):
    length = len(x)
    i = 0
    isTrue = False
    while isTrue == False:
        num = z - x[i]
        a = bin_search(x, num, 0, length-1)
        if a == num:
            print num, " + ", x[i], " = ", z, "True!!!!!!!"
            isTrue = True
        i+=1
        if i == length:
            print "No such numbers add upto", z
            return False


z = 5
x = [1, 2, 3, 4, 5, 50, 51, 250]


isSum(x, z)



