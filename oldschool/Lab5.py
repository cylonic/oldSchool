#Wes Turner
#CS101
#Lab 6

#This program accepts inputs of scores and finds the mean, median
#standard deviation and mode. Does not handle multiple mode data sets


from tkinter import *
from tkinter import ttk
import math

#list of scores entered
lst = []

def avg():
    #computes the average
    return float(sum(lst)/len(lst))

def med():
    #method to calculate the median of the list
    numScores = len(lst)
    if len(lst) == 1:
        median = lst[0]
    elif numScores % 2 == 1:
        lst.sort()
        median = lst[numScores//2]
    elif numScores % 2 == 0 and len(lst) == 2:
        median = (lst[0] + lst[1]) // 2
    else:
        lst.sort()
        median = (lst[numScores//2+1] + lst[numScores//2]) // 2
    return median

def stDev():
    #method to calculate the standard deviation of the list
    if len(lst) < 2:
        return "undefined"
    sd = 0
    for i in range(len(lst)):
        sd += ((lst[i] - avg())**2)
    return float(math.sqrt(sd / (len(lst) - 1)))

def Mode():
    #method to calculate the mode of the list.
    #NOTE This does not handle multi-modal data sets
    mode = max(map(lambda hi: (lst.count(hi), hi), lst)) #using a lambda function
    if lst.count(mode[1]) == 1:
        return 'undefined'
    else:
        return (mode[1])

def calculate(*args):
    #core of the program, new calculations each time a new value is entered
    try:
        value = float(score.get())
        lst.append(value)
        mean.set(avg())
        median.set(med())
        sDev.set(stDev())
        mode.set(Mode())
        score_entry.delete(0, END) #clear the input box after each entry
    except ValueError:
        pass

#setup window
root = Tk()
root.title('Statistics')
mainframe = ttk.Frame(root, padding = "3 3 12 12")
mainframe.grid(column = 0, row = 0, sticky = (N, W, E, S))
mainframe.columnconfigure(0, weight = 1)
mainframe.rowconfigure(0, weight = 1)

#setup variables
score = StringVar()
mean = StringVar()
median = StringVar()
sDev = StringVar()
mode = StringVar()
score_entry = ttk.Entry(mainframe, width = 7, textvariable = score)
score_entry.grid(column = 2, row = 2, sticky = (W, E))

#displaying results
ttk.Label(mainframe, text = 'Enter data below and I will compute statistics').grid(column = 2, row = 1)
ttk.Label(mainframe, textvariable = mean).grid(column = 3, row = 4, sticky = (W, E))
ttk.Label(mainframe, textvariable = median).grid(column = 3, row = 5, sticky = (W, E))
ttk.Label(mainframe, textvariable = sDev).grid(column = 3, row = 6, sticky = (W, E))
ttk.Label(mainframe, textvariable = mode).grid(column = 3, row = 7, sticky = (W, E))


#displaying text of the window
ttk.Button(mainframe, text = 'Enter Data and Compute Statistics', command = calculate).grid(column = 2, \
                                                                    row = 3, sticky = W)
ttk.Label(mainframe, text = 'mean').grid(column = 2, row = 4, sticky =(W, E))
ttk.Label(mainframe, text = 'median').grid(column = 2, row = 5, sticky =(W, E))
ttk.Label(mainframe, text = 'standard deviation').grid(column = 2, row = 6, sticky = (W, E))
ttk.Label(mainframe, text = 'mode').grid(column = 2, row = 7, sticky = (W, E))

for child in mainframe.winfo_children():
    child.grid_configure(padx = 5, pady = 5)

score_entry.focus()
root.bind('<Return>', calculate)

root.mainloop();
            

