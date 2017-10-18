#Wesley Turner
#Lab 2
#CS101

#This program converts a users input expected in liters to quarts,
#gallons, cubic feet, and acre feet

#Conversion constants
ltr2qt = 1.0556
ltr2cm = 1000
in2cm = 2.54
in2ft = 12
m2ft = 5280
sqm = 640
qt2gal = 4

#Telling the user what the program does
print("This program takes user input of liters and outputs the conversion",
      "to quarts, gallons, cubic feet, and acre feet.\n")

#Loop to execute the program as many times as desired
while 1:

    cin = float(input("Enter number of liters: "))

    print(cin, "liters converts to.. \n", "%.2f" %(cin*ltr2qt), "quarts",
           "\n", "%.2f" %(cin*ltr2qt/qt2gal), "gallons",
    "\n", "%.2f" %(cin*ltr2cm / (in2cm * in2ft* in2cm * in2ft* in2cm * in2ft)), "cubic feet",
          "\n", "%.2f" %(cin*ltr2cm / (in2cm * in2ft* in2cm * in2ft* in2cm * in2ft) / (m2ft*m2ft / sqm)), "acre feet\n") #very confusing

    #asking user if they want to continue the program
    cin2 = input("Enter 'y' to continue, 'n' to quit ")
    if cin2 != 'y':
        print("Quitting")
        break
    





   

