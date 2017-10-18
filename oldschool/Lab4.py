#Wes Turner
#CS101
#Lab 4


#This program accepts input from the user in the form of test scores
#then finds the average, median, standard deviation and mode of those scores
#Handles everything only as integers



import math



def median(x, lst):
    #method to calculate the median of the list
    if len(lst) == 1:
        median = lst[0]
    elif x % 2 == 1:
        scores.sort()
        median = scores[x//2]
    elif x % 2 == 0 and len(lst) == 2:
        median = (scores[0] + scores[1]) // 2
    else:
        scores.sort()
        median = (scores[x//2+1] + scores[x//2]) // 2
    return median

def sDev(a, lst):
    #method to calculate the standard deviation of the list
    if len(lst) < 2:
        return "undefined"
    sd = 0
    for i in range(len(lst)):
        sd += ((lst[i] - a)**2)
    return int(math.sqrt(sd / (len(lst) - 1)))

def mode(lst):
    #method to calculate the mode of the list.
    #NOTE This does not handle multi-modal data sets
    highest = 0
    if len(lst) == 1:
        return lst[0]
    else:
        for i in range(len(lst)):
            if lst.count(lst[i]) > highest:
                highest = i
        if lst.count(lst[highest]) == 1:
            return 'undefined'
        else:
            return lst[highest]
    

print('This program will accept a number of scores, find the average,',
      'the median, the standard deviation, and mode of all the scores\n')

    
num = int(input("Enter number of scores ")) #prompt user for score, accepts only ints
scores = [None]*num #initialize a list of proper size

total = 0
for i in range(num):
    #gathers all scores, sums them, then averages
    inp = int(input("Enter a score: "))
    scores[i] = inp
    total += inp

avg = total // num

print('\nThe average is: ', avg)
print('The median is: ', median(num, scores))
print('The standard deviation is: ', sDev(avg, scores))
print('The mode is:', mode(scores))


