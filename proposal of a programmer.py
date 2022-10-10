print ("WILL YOU BE MY GIRLFRIEND ?")
a=input ("yes OR no :- ")

if a!='yes' and a!='no':
    print ("wrong asnwer*, please try again")
print("")    
def happy_heart():    
    for row in range (6):
        for col in range (7):
            if (row==0 and col%3!=0) or (row==1 and col%3==0) or (row-col==2) or (row+col==8):
                print ("❤️", end="")
                
            else:
                print ("  ",end="")
        print ()     

def write_feeling():
    print("\nI LOVE YOU")        

if a=='yes':
    happy_heart(),write_feeling()
       
def broken_heart():    
    for row in range (6):
        for col in range (7):
            if (row==0 and col%3!=0) or (row==1 and col%3==0) or (row-col==2) or (row+col==8):
                print ("💔", end="")
                
            else:
                print ("  ",end="")
        print ()
def write_sad_feeling():
    print ("\nALL THE BEST FOR YOUR LOVE LIFE :(")

if a=='no':
    broken_heart(),write_sad_feeling()