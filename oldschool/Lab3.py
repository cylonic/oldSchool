#Wesley Turner
#CS101
#Lab3

#This program finds the number of chars in a line of text excluding
#periods, finds the number of words, and finds the average word length.
#It also finds the number of sentences and the average words per sentence

print("This program reads a line of text and outputs the number of",
      "characters excluding spaces, the number of words, and the average",
      "word length.\n")
string = input("Enter a line of text, or multiple lines,"
               " separated by a period: \n")

words = len(string.split(None))
spaces = string.count(' ')
chars = len(list(string)) - spaces
periods = string.count('.')
if periods == 0:
    periods = 1
avgLen = chars / words
avgWords = words / periods

print("Number of characters: ", chars,"\nNumber of words: ",
      words, "\nAverage word length: ", "%.1f" %avgLen)
print("Sentences: ", periods, "\nAverage words per sentence: ", "%.1f" %avgWords)
