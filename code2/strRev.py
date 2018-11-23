''' ======= Code To Express ======= '''
''' ========= Daily Codes ========= '''

def strRev(a):
    return a[::-1]

stringList=['Hello','Greetings']
stringRevList=[strRev(i) for i in stringList]

for i in stringRevList:
    print(i)