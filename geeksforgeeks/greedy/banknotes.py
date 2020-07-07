def countCurrency(amount):
    notes = [2000,500,200,100,50,20,10,5,1]
    notesCounter = [0,0,0,0,0,0,0,0,0]

    for i in range(len(notes)):
        if amount >= notes[i]:
            notesCounter[i] = amount // notes[i]
            amount = amount - notesCounter[i] * notes[i]    
            
    for i in range(len(notes)):
        print(notes[i],notesCounter[i])    
    
            
amount = 868
countCurrency(amount)