

def selectionSort(x):
    n = len(x)
    for i in range(n-1):
        min = i
        for j in range(i+1, n):
            if x[min] > x[j]:
                min = j
        temp = x[min]
        x[min] = x[i]
        x[i] = temp


l = [1, 52, 0, -100, -200, -54, 100, 7100, 2]

print(l)
selectionSort(l)
print(l)
