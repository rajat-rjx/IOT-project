print("A simple Calculator")
n1=int(input("Enter first number- "))
n2=int(input("Enter second number- "))
op=(input("Choose your operater" " + , -, * , ** , / "))

if op=='+':
	print(n1, op, n2, "=", n1+n2)
	
elif op== '-':
	print(n1, op, n2, "=", n1-n2)
	
elif op=='*':
	print(n1, op, n2, "=", n1*n2)

elif op=='/':
	print(n1, op, n2, "=", n1/n2)
	
elif op=='**':
	print(n1, op, n2, "=", n1**n2)

