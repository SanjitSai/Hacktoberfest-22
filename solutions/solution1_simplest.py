inp= input("Enter the number or string ")
if inp[::-1]==inp:
	print(f"{inp} is palindrome")
else:
	print(f"{inp} is not palindrome")
