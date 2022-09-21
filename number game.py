human=0
computer=0
import random
print("                    CHOOSE NUMBER GAME (1 to 6)\n")

i=0
while(i<=5):
	com=random.randint(1,6)
	
	n=int(input(" Human choose number-"))
	
	if n>6:
		print(" Wrong *input* try again")
		break
	
	print(" Computer choose number-", com,)
	

	i=i+1
	
	
	if n<com:
		computer=computer+1
		print(" computer score ", computer,"\n")
	
	
	elif n==com:
		computer=computer+1
		human=human+1
		print(" Game tie \n")
		
	elif n>com:
		human=human+1
		print(" Human score ", human, "\n")

if human<computer:
	print(" Computer win")
	
else:
	print(" Human win")
