#r = [0, 100]
#while r[0] != r[1]:
#  guess = sum(r) / 2
#  r[raw_input('%s? ' % guess) == 'lower'] = guess
#print r[0]


lst = [0, 100]
while lst[0] != lst[1]:
    guess = sum(lst)/2
    print "is your num %s? y, h or l" % guess
    ans = raw_input()
    if ans == 'y':
        print guess
        break
    elif ans == 'h':
        lst[0] = guess
    elif ans == 'l':
        lst[1] = guess
    
        
    
