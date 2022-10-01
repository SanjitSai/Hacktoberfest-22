# Python program to find out if a number is a pallindrome or not

# Input a number
num = int(input("Enter a number: "))

if str(num)==(str(num))[::-1]:
    print("TRUE")
else:
    print("FALSE")
