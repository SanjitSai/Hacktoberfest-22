#Program to check whether a number is a palindrome number or not
num = int(input("Enter number: "))
rev = 0
nnum=num

while(nnum!=0):
    digit = nnum%10;
    nnum = nnum//10
    rev = rev*10 + digit

if rev == num:
    print(num, "is a palindrome number")
else:
    print(num, "is not a palindrome number")
