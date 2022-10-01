inp=int(input("Enter the number item in list1 "))
print("Enter the items of list1")
list1=[int(input()) for i in range(inp)]
inp= int(input("Enter the number item in list2 "))
list2=[int(input()) for i in range(inp)]
result=sorted(list1+list2)
print(f"sorted list is \n {result}")
